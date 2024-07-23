#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

using namespace std;

template<class T>
class Node
{
    private:
        T info;
        Node* next;
    public:
        Node(T, Node* n=0);
        void setInfo(T);
        void setNext(Node*);
        T getInfo();
        Node* getNext();
};

template<class T>
Node<T>::Node(T newInfo, Node* n)
{
    info = newInfo;
    next = n;
}
template<class T>
void Node<T>::setInfo(T newInfo)
{
    info = newInfo;
}
template<class T>
void Node<T>::setNext(Node* ptr)
{
    next = ptr;
}
template<class T>
T Node<T>::getInfo()
{
    return info;
}
template<class T>
Node<T>* Node<T>::getNext()
{
    return next;
}

#endif // NODE_H_INCLUDED
