#ifndef MINHEAP_H_INCLUDED
#define MINHEAP_H_INCLUDED

using namespace std;

struct Node
{
    char label;
    int cost;
};

class MinHeap
{
    private:
        Node* heap;      //an array of nodes
        int _size;       //size of array
        int currSize = 0; //current Size
    public:
        Node extractMin();              //returns & removes the node with minimum cost
        void buildMinHeap(Node[], int); //allocates array then builds a min-heap from an array of struct Node with the given size
        void minHeapify(int, int);      //restores the min-heap property for the “heap” array using the given index and size n
        void swapTwoNodes(int, int);    //swap two nodes
        void decreaseKey(char, int);    //decreases the node that has the given label to newCost
        int parent(int);                //returns the index of the parent of i
        int lChild(int);
        int rChild(int);
        int getSize();                  //returns size of the heap
        int getLabelIndex(char);        //returns index of label
        bool inHeap(char);              //checks if the node with the given label is in the heap
        bool inEmpty();
};
Node MinHeap::extractMin()
{
    if (currSize <= 0)
    {
        Node nullNode;
        nullNode.label = '_';
        nullNode.cost = -1;
        return nullNode;
    }
    if (currSize == 1)
    {
        currSize--;
        return heap[0];
    }
    Node minNode = heap[0];
    swapTwoNodes(0, (currSize - 1));
    currSize--;
    minHeapify(0, currSize);
    return minNode;
}
void MinHeap::buildMinHeap(Node arr[], int aSize)
{
    int j;
    _size = aSize;
    heap = new Node[_size];
    for (int i = 0; i < _size; i++)
    {
        j = i;
        heap[i].label = arr[i].label;
        heap[i].cost = arr[i].cost;
        currSize++;
        while (j != 0 &&  heap[j].cost < heap[parent(j)].cost)
        {
            swapTwoNodes(parent(j), j);
            j = parent(j);
        }
    }
}
void MinHeap::minHeapify(int i, int n)
{
    int smallest = i, lChi = lChild(i), rChi = rChild(i);
    if (lChi != -1 && heap[lChi].cost < heap[smallest].cost)
    {
        smallest = lChi;
    }
    if (rChi != -1 && heap[rChi].cost < heap[smallest].cost)
    {
        smallest = rChi;
    }
    if (smallest != i)
    {
        swapTwoNodes(i, smallest);
        minHeapify(smallest, n);
    }
}
void MinHeap::swapTwoNodes(int index1, int index2)
{
    char lTemp;
    int cTemp;
    lTemp = heap[index1].label;
    cTemp = heap[index1].cost;
    heap[index1].label = heap[index2].label;
    heap[index1].cost = heap[index2].cost;
    heap[index2].label = lTemp;
    heap[index2].cost = cTemp;
}
void MinHeap::decreaseKey(char label, int newCost)
{
    if(newCost < heap[getLabelIndex(label)].cost)
    {
        if(inHeap(label) == true)
        {
            int i = getLabelIndex(label);
            heap[i].cost = newCost;
            while (i != 0 &&  heap[i].cost < heap[parent(i)].cost)
            {
                swapTwoNodes(parent(i), i);
                i = parent(i);
            }
        }
    }
}
int MinHeap::parent(int i)
{
    int paren = ((i - 1) / 2);
    if(i == 0)
    {
        return -1;
    }
    return paren;
}
int MinHeap::lChild(int i)
{
    int lChil = ((2 * i) + 1);
    if(lChil >= currSize)
    {
        return -1;
    }
    return lChil;
}
int MinHeap::rChild(int i)
{
    int rChil = ((2 * i) + 2);
    if(rChil >= currSize)
    {
        return -1;
    }
    return rChil;
}
int MinHeap::getSize()
{
    return _size;
}
int MinHeap::getLabelIndex(char label)
{
    for(int i = 0; i < _size; i++)
    {
        if(heap[i].label == label)
        {
            return i;
        }
    }
    return -1;
}
bool MinHeap::inHeap(char label)
{
    if(getLabelIndex(label) == -1)
    {
        return false;
    }
    return true;
}
#endif // MINHEAP_H_INCLUDED
