#ifndef QUEUESLL_H_INCLUDED
#define QUEUESLL_H_INCLUDED
#include "SLL.h"

using namespace std;

template<class T>
class QueueSLL
{
    private:
        SLL<T> obj;
    public:
        void enqueue(T);
        T dequeue();
        T front();
        bool isEmpty();
        void clear();
};

template<class T>
void QueueSLL<T>::enqueue(T info)
{
    obj.addtoTail(info);
}
template<class T>
T QueueSLL<T>::dequeue()
{
    return obj.removeFromHead();
}
template<class T>
T QueueSLL<T>::front()
{
    return obj.getValueAtHead();
}
template<class T>
bool QueueSLL<T>::isEmpty()
{
    if (obj.isEmpty() == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
template<class T>
void QueueSLL<T>::clear()
{
    obj.clear();
}

#endif // QUEUESLL_H_INCLUDED
