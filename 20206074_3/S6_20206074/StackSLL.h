#ifndef STACKSLL_H_INCLUDED
#define STACKSLL_H_INCLUDED
#include "SLL.h"

using namespace std;

template<class T>
class StackSLL
{
    private:
        SLL<T> obj;
    public:
        void push(T);
        T pop();
        T top();
        bool isEmpty();
        void clear();
};

template<class T>
void StackSLL<T>::push(T info)
{
    obj.addtoHead(info);
}
template<class T>
T StackSLL<T>::pop()
{
    return obj.removeFromHead();
}
template<class T>
T StackSLL<T>::top()
{
    return obj.getValueAtHead();
}
template<class T>
bool StackSLL<T>::isEmpty()
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
void StackSLL<T>::clear()
{
    obj.clear();
}

#endif // STACKSLL_H_INCLUDED
