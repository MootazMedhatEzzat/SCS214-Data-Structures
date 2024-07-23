#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED
#include "Node.h"

using namespace std;

template<class T>
class SLL
{
    private:
        Node<T> *head, *tail;
    public:
        SLL();
        void addtoHead(T);
        void addtoTail(T);
        T removeFromHead();
        T removeFromTail();
        T getValueAtHead();//a function that returns the value at head without deleting it
        bool isEmpty();
        void clear();
        friend ostream& operator<<(ostream& output, SLL<T>& obj)
        {
            if (obj.isEmpty() == true)
            {
                cout << "Empty" << endl;
            }
            else
            {
                Node<T>* current = obj.head;
                while (current -> getNext() != NULL )
                {
                    output << current -> getInfo();
                    cout << endl;
                    current = current -> getNext();
                }
                output << current -> getInfo();
            }
            return output;
        }
};

template<class T>
SLL<T>::SLL()
{
    head = tail = 0;
}
template<class T>
void SLL<T>::addtoHead(T newInfo)
{
    Node<T>* newNode = new Node<T>(newInfo);
    newNode -> setInfo(newInfo);
    newNode -> setNext(head);
    head = newNode;
}
template<class T>
void SLL<T>::addtoTail(T newInfo)
{
    //If the Linked List is empty, then we will add the new node to head
    if (isEmpty() == true)
    {
        addtoHead(newInfo);
    }
    else
    {
        //Traverse till the last node then we will add the new node
        Node<T>*current = head;
        while (current -> getNext() != NULL)
        {
            current = current -> getNext();
        }
        Node<T>* newNode = new Node<T>(newInfo);
        newNode -> setInfo(newInfo);
        newNode -> setNext(NULL);
        current -> setNext(newNode);
    }
}
template<class T>
T SLL<T>::removeFromHead()
{
    if (isEmpty() == true)
    {
        return 0;
    }
	Node<T>* current = head;
	head = head -> getNext();
	T poppedValue = current -> getInfo();
	free(current);
	return poppedValue;
}
template<class T>
T SLL<T>::removeFromTail()
{
    if (isEmpty() == true)
    {
        return 0;
    }
    if (head -> getNext() == NULL)
    {
        T poppedValue = head -> getInfo();
        delete head;
        return poppedValue;
    }
    //Finding the second last node
    Node<T>* secondLast = head;
    while(secondLast -> getNext() -> getNext() != NULL)
    {
        secondLast = secondLast -> getNext();
    }
    T poppedValue = secondLast -> getNext() -> getInfo();
    delete (secondLast -> getNext());
    secondLast -> setNext(NULL);
    return poppedValue;
}
template<class T>
T SLL<T>::getValueAtHead()
{
    if (isEmpty())
    {
        return 0;
    }
	return head -> getInfo();
}
template<class T>
bool SLL<T>::isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    return false;
}
template<class T>
void SLL<T>::clear()
{
    Node<T>* current = head;
    Node<T>* nex = NULL;
    while (current != NULL)
    {
        nex = current -> getNext();
        free(current);
        current = nex;
    }
    head = NULL;
}

#endif // SLL_H_INCLUDED
