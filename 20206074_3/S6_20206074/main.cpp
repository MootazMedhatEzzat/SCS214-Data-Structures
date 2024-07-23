#include <iostream>
#include <string>
#include<math.h>
#include "Node.h"
#include "SLL.h"
#include "StackSLL.h"
#include "QueueSLL.h"

using namespace std;

bool chkBalanced(string);
string convertToBinary(int);
int priority(char); // Function to return priority of operators, we will call it in convertInfixToPostfix(string) function.
string convertInfixToPostfix(string);
int evaluatePostfix(string);
template<class T>
bool moveNthElem(QueueSLL<T>&, int);
template<class T>
void reverseQueue(QueueSLL<T>&);

int main()
{
    int option;
    cout << "1- Check for balanced brackets." << endl;
    cout << "2- Convert to binary." << endl;
    cout << "3- Convert infix to postfix expression and evaluate." << endl;
    cout << "4- Move Nth element to front in a queue of strings." << endl;
    cout << "5- Reverse elements of a queue of doubles." << endl;
    cout << "6- Exit." << endl;
    cout << "Choose An Option From The Above Options: ";
    cin >> option;
    while(option < 1 || option > 6)
    {
        cout << "Choose Another Option Or 6 To End The Program: ";
        cin >> option;
    }
    while(option >= 1 || option <= 6)
    {
        switch (option)
        {
            case 1:
            {
                string spaces,expression;
                cout << "Please Enter An Expression: ";
                while (true)
                {
                    cin >> spaces;
                    expression += spaces;
                    if(cin.peek()=='\n')
                    break;
                }
                if (chkBalanced(expression))
                {
                    cout << "Balanced" << endl;
                }
                else
                {
                    cout << "Imbalanced" << endl;
                }
                break;
            }
            case 2:
            {
                int decimal;
                cout << "Please Enter A Decimal Value: ";
                cin >> decimal;
                cout << "Binary Number IS: " << convertToBinary(decimal) << endl;
                break;
            }
            case 3:
            {
                string spaces, in;
                cout << "Please Enter An Infix mathematical Expression: ";
                while (true)
                {
                    cin >> spaces;
                    in += spaces;
                    if(cin.peek()=='\n')
                    break;
                }
                cout << evaluatePostfix(convertInfixToPostfix(in)) << endl;
                break;
            }
            case 4:
            {
                int choice;
                cout << "1- Do You Want To Use The Test Case IN Assignment (queue with the elements {4,6,8,10} and n=3) ?" << endl;
                cout << "2- Or You Want To Pass A New Queue And A New Position(n) ?: ";
                cin >> choice;
                if(choice == 1)
                {
                    QueueSLL <int>q1; //{4,6,8,10}
                    q1.enqueue(4);
                    q1.enqueue(6);
                    q1.enqueue(8);
                    q1.enqueue(10);
                    moveNthElem(q1, 3);
                }
                else
                {
                    QueueSLL<string> newQueue;
                    string value;
                    int position, numberOfElem;
                    cout << "How Many Items Would You Like To Add To The Queue?: ";
                    cin >> numberOfElem;
                    for(int i = 0; i < numberOfElem; i++)
                    {
                        cout << "Enter Element Number " << i + 1 << " : ";
                        cin >> value;
                        newQueue.enqueue(value);
                    }
                    cout << "Enter The Position(n) Of Element That You Want To Move It To The Head Of The Queue: ";
                    cin >> position;
                    moveNthElem(newQueue, position);
                }
                break;
            }
            case 5:
            {
                QueueSLL<double> newQueue;
                double value;
                int numberOfElem;
                cout << "How Many Items Would You Like To Add To The Queue?: ";
                cin >> numberOfElem;
                for(int i = 0; i < numberOfElem; i++)
                {
                    cout << "Enter Element Number " << i + 1 << " : ";
                    cin >> value;
                    newQueue.enqueue(value);
                }
                reverseQueue(newQueue);
                break;
            }
            case 6:
            {
                cout << "^-^ Thank You For Using Our Program ^-^";
                return 0;
            }
        }
        cout << "Choose Another Option Or 6 To End The Program: ";
        cin >> option;
        while(option < 1 || option > 6)
        {
            cout << "Choose Another Option Or 6 To End The Program: ";
            cin >> option;
        }
    }
    return 0;
}

bool chkBalanced(string expression)
{
    StackSLL <char>chkStack;
    char exp;
    for (int i = 0; i < expression.length(); i++)
    {
        if (expression[i] == '{' || expression[i] == '<' || expression[i] == '[' || expression[i] == '(')
        {
            chkStack.push(expression[i]);
        }
        if (chkStack.isEmpty() == true)
        {
            return false;
        }
        switch (expression[i])
        {
            // Store the top element in a
            case '}':
            {
                exp = chkStack.top();
                chkStack.pop();
                if (exp == '<' || exp == '[' || exp == '(')
                {
                    return false;
                }
                break;
            }
            // Store the top element in b
            case '>':
            {
                exp = chkStack.top();
                chkStack.pop();
                if (exp == '{' || exp == '[' || exp == '(')
                {
                    return false;
                }
                break;
            }
            // Store the top element in c
            case ']':
            {
                exp = chkStack.top();
                chkStack.pop();
                if (exp == '{' || exp == '<' || exp == '(')
                {
                    return false;
                }
                break;
            }
            // Store the top element in d
            case ')':
            {
                exp = chkStack.top();
                chkStack.pop();
                if (exp == '{' || exp == '<' || exp == '[')
                {
                    return false;
                }
                break;
            }
        }
    }
    return (chkStack.isEmpty());
}
string convertToBinary(int dec)
{
    StackSLL <int>convertStack;
    string binary, digit;
    int rem;
    if(dec % 2 != 0)
    {
        rem = 1;
        convertStack.push(rem);
    }
    else
    {
        rem = 0;
        convertStack.push(rem);
    }
    while(dec >= 2)
    {
        dec = dec / 2;
        if(dec % 2 != 0)
        {
            rem = 1;
            convertStack.push(rem);
        }
        else
        {
            rem = 0;
            convertStack.push(rem);
        }
    }
    while(convertStack.isEmpty() != true)
    {
        digit = to_string(convertStack.top());
        binary = binary + digit;
        convertStack.pop();
    }
    return binary;
}
int priority(char oper)
{
    if (oper == '+' || oper == '-')
    {
        return 1;
    }
    else if (oper == '*' || oper == '/')
    {
        return 2;
    }
    else if (oper == '^')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}
string convertInfixToPostfix(string infix)
{
    StackSLL <char>conInStack;
    string postfix;
    for(int i = 0; i < infix.length(); i++)
    {
        // If the character is an operand,then we will add it to the postfix expression.
        if(infix[i] >= '0' && infix[i] <= '9')
        {
            postfix += infix[i];
        }
        //If the character is an ‘(‘, then we will push it to the stack
        else if(infix[i] == '(')
        {
            conInStack.push(infix[i]);
        }
        //If the character is an ‘)’, then we will pop and add it to the postfix expression until an ‘(‘ is encountered.
        else if(infix[i] == ')')
        {
            while(conInStack.top() != '(')
            {
                postfix += conInStack.top();
                conInStack.pop();
            }
            conInStack.pop();
        }
        else
        {
            while (conInStack.isEmpty() != true && priority(infix[i]) <= priority(conInStack.top()))
            {
                postfix += conInStack.top();
                conInStack.pop();
            }
            conInStack.push(infix[i]);
        }
    }
    // We will pop all the remaining elements from the stack
    while(conInStack.isEmpty() != true)
    {
        postfix += conInStack.top();
        conInStack.pop();
    }
    cout << "Postfix Expression IS: " << postfix << endl;
    return postfix;
}
int evaluatePostfix(string postfixExp)
{
    StackSLL <char>evaStack;
    for(int i = 0; i < postfixExp.length(); i++)
    {
        if (postfixExp[i] >= '0' && postfixExp[i] <= '9')
        {
            evaStack.push((postfixExp[i] - '0'));
        }
        else
        {
            int x = evaStack.top();
            evaStack.pop();
            int y = evaStack.top();
            evaStack.pop();
            if (postfixExp[i] == '+')
            {
                evaStack.push((y + x));
            }
            else if (postfixExp[i] == '-')
            {
                evaStack.push((y - x));
            }
            else if (postfixExp[i] == '*')
            {
                evaStack.push((y * x));
            }
            else if (postfixExp[i] == '/')
            {
                evaStack.push((y / x));
            }
            else if (postfixExp[i] == '^')
            {
                evaStack.push(pow(y, x));
            }
        }
    }
    cout << "The Evaluated Value Of The Postfix Expression IS: ";
    return evaStack.top();
}
template<class T>
bool moveNthElem(QueueSLL<T>& obj, int n)
{
    QueueSLL<T> refQueue;
    int sizOfQueue = 1;
    T targetValue;
    while(obj.isEmpty() != true)
    {
        if(n == sizOfQueue)
        {
            targetValue = obj.dequeue();
            sizOfQueue ++;
            if(obj.isEmpty() == true)
            {
                sizOfQueue --;
                break;
            }
        }
        refQueue.enqueue(obj.dequeue());
        if(obj.isEmpty() == true)
        {
            break;
        }
        sizOfQueue ++;
    }
    if(n <= sizOfQueue)
    {
        cout << "The Queue After The Update Will Be: {";
        cout << targetValue << ", ";
        obj.enqueue(targetValue);
        sizOfQueue--;
        while(refQueue.isEmpty() != true)
        {
            T qElement = refQueue.dequeue();
            if(sizOfQueue == 1)
            {
                cout << qElement << "}";
                break;
            }
            else
            {
                cout << qElement << ", ";
            }
            obj.enqueue(qElement);
            sizOfQueue --;
        }
        cout << endl;
        return true;
    }
    else
    {
        while(refQueue.isEmpty() != true)
        {
            obj.enqueue(refQueue.dequeue());
        }
        cout << "The Position You Entered Is Out Of The Range" << endl;
        return false;
    }
}
template<class T>
void reverseQueue(QueueSLL<T>& obj)
{
    int sizOfQueue = 1;
    StackSLL<T> resStack;
    while(obj.isEmpty() != true)
    {
        resStack.push(obj.dequeue());
        sizOfQueue++;
    }
    cout << "The Queue After Being Reversed Will Be: {";
    while(resStack.isEmpty() != true)
    {
        T value = resStack.pop();
        if(sizOfQueue == 2)
        {
            cout << value << "}";
            break;
        }
        else
        {
            cout << value << ", ";
        }
        obj.enqueue(value);
        sizOfQueue --;
    }
    cout << endl;
}
