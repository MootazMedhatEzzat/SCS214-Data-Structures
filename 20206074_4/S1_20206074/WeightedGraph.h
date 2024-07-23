#ifndef WEIGHTEDGRAPH_H_INCLUDED
#define WEIGHTEDGRAPH_H_INCLUDED
#include <fstream>
#include "MinHeap.h"

using namespace std;

class WeightedGraph
{
    private:
        int** g;
        int nVertices;
        int nEdges;
    public:
        int getNVertices();//returns the number of vertices
        int getWeight(char,char);//returns weight of the edge connecting the given vertices
        int getVertexIndex(char);//returns the index of given vertex label
        char getIndexVertex(int);//returns the vertex label of given vertex index
        int* returnNeighbors(int);// returns the indices of the neighbors of the vertex v as an int array
        int numNeighbors(int);//returns the number of neighbors of the vertex v
        void loadGraphFromFile(ifstream&);//allocates the adjacency matrix & initializes edge weights from the specified file
        void dijkstra(char, char*, Node []);//find the shortest path from the start vertex to all other vertices, by filling the prev array and the distances array
};
int WeightedGraph::getNVertices()
{
    return nVertices;
}
int WeightedGraph::getWeight(char sVertex, char dVertex)
{
    int edgeWeight;
    for(int i = 0; i < nVertices; i++)
    {
        for(int j = 0; j < nVertices; j++)
        {
            if(sVertex == getIndexVertex(i) && dVertex == getIndexVertex(j))
            {
                edgeWeight = g[i][j];
            }
        }
    }
    return edgeWeight;
}
int WeightedGraph::getVertexIndex(char vertex)
{
    int index = (int)vertex - 97;
    return index;
}
char WeightedGraph::getIndexVertex(int index)
{
    char vertex = (char)(index + 97);
    return vertex;
}
int* WeightedGraph::returnNeighbors(int v)
{
    int counter = 0, nNeighbors = numNeighbors(v);
    int* neighborsArray = new int[nNeighbors];
    for(int i = 0; i < nVertices; i++)
    {
        if(getWeight(getIndexVertex(v), getIndexVertex(i)) != 0)
        {
            neighborsArray[counter] = i;
            counter ++;
        }
    }
    return neighborsArray;
}
int WeightedGraph::numNeighbors(int v)
{
    int counter = 0;
    for(int i = 0; i < nVertices; i++)
    {
        if(getWeight(getIndexVertex(v), getIndexVertex(i)) != 0)
        {
            counter ++;
        }
    }
    return counter;
}
void WeightedGraph::loadGraphFromFile(ifstream& graphFile)
{
    char sVertex, dVertex;
    int eWeight;
    graphFile >> nVertices;
    graphFile >> nEdges;
    g = new int*[nVertices];
    for(int i = 0; i < nVertices; i++)
    {
        g[i] = new int[nVertices];
        for(int j = 0; j < nVertices; j++)
        {
            g[i][j] = 0;
        }
    }
    for(int i = 0; i < nEdges; i++)
    {
        graphFile >> sVertex;
        graphFile >> dVertex;
        graphFile >> eWeight;
        g[getVertexIndex(sVertex)][getVertexIndex(dVertex)] = eWeight;
    }
}
void WeightedGraph::dijkstra(char startVertex, char prev[], Node distances[])
{
    MinHeap obj;
    int numOfNeighbors;
    int* neighborsArray;
    bool spt[nVertices] = { false };
    Node node;
    for (int i = 0; i < nVertices; i++)
    {
        distances[i].label = getIndexVertex(i);
        distances[i].cost = INT_MAX;
    }
    obj.buildMinHeap(distances, nVertices);
    obj.decreaseKey(startVertex, 0);
    for(int i = 0; i < nVertices; i++)
    {
        node = obj.extractMin();
        spt[getVertexIndex(node.label)] = true;
        numOfNeighbors = numNeighbors(getVertexIndex(node.label));
        neighborsArray = returnNeighbors(getVertexIndex(node.label));
        for(int i = 0; i < numOfNeighbors; i++)
        {
            obj.decreaseKey(getIndexVertex(neighborsArray[i]), (getWeight(node.label, getIndexVertex(neighborsArray[i])) + node.cost));
        }
        distances[getVertexIndex(node.label)].label = node.label;
        distances[getVertexIndex(node.label)].cost = node.cost;
        for (int v = 0; v < nVertices; v++)
        {
            if(node.label == startVertex)
            {
                prev[v] = node.label;
            }
            else if (spt[v] != true && g[getVertexIndex(node.label)][v] && distances[getVertexIndex(node.label)].cost + g[getVertexIndex(node.label)][v] < distances[v].cost)
            {
                prev[v] = node.label;
            }
        }
    }
}
#endif // WEIGHTEDGRAPH_H_INCLUDED
