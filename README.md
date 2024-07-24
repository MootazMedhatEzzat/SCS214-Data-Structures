# SCS214-Data-Structures
---

<div align="center">
  <table width="100%">
    <tr>
      <td colspan="2" align="center"><strong>{ Assignment-3-DS }</strong></td>
    </tr>
    <tr>
      <td align="left"><strong>Name</strong>: Mootaz Medhat Ezzat Abdelwahab</td>
      <td align="right"><strong>Id</strong>: 20206074</td>
    </tr>
    <tr>
      <td align="left"><strong>Program</strong>: Software Engineering</td>
      <td align="right"><strong>Group</strong>: B (S6)</td>
    </tr>
    <tr>
      <td colspan="2" align="center"><strong>Delivered To</strong>: DR. Cherry Ahmed</td>
    </tr>
  </table>
</div>

---

## Assignment 3

Cairo University  
Faculty of Computers and Artificial Intelligence  
Data Structures Course (Spring 2022) 

### Instructions

1. The deadline for submission is Sunday, May 8th at 11:55 pm.
2. Submission will be on Blackboard.
3. No late submissions are allowed.
4. No submission through e-mails.
5. Please follow the Submission Notes found below.
6. In case of cheating, you will receive a negative grade whether you give the code to someone, take the code from someone/internet, or even send it to someone for any reason.
7. You have to write clean code and follow a good coding style, including choosing meaningful variable names.

### Task

1. Implement a class template `Node` with the following structure:
   ```cpp
   template<class T>
   class Node {
       T info;
       Node* next;
   public:
       Node(T, Node* n = 0);
       Node* getNext();
       void setNext(Node*);
       T getInfo();
       void setInfo(T);
   };
   ```

2. Create a class template `SLL` (Single Linked List) with the following structure:
   ```cpp
   template<class T>
   class SLL {
       Node<T> *head, *tail;
   public:
       SLL() { head = tail = 0; }
       void addToHead(T);
       void addToTail(T);
       T removeFromHead();
       T removeFromTail();
       T getValueAtHead(); // returns the value at head without deleting it
       bool isEmpty();
       void clear();
       friend ostream& operator<<(ostream&, const SLL<T>&);
   };
   ```

3. Implement the class template `StackSLL` which uses the linked list `SLL`. The class should include:
   - `push`
   - `pop`
   - `top`
   - `isEmpty`
   - `clear`

4. Implement the class template `QueueSLL` which uses the linked list `SLL`. The class should include:
   - `enqueue`
   - `dequeue`
   - `front`
   - `isEmpty`
   - `clear`

5. Implement a function `bool chkBalanced(string)` that uses a stack to check if the brackets within an expression are balanced. It should handle `{}`, `<>`, `[]`, and `()`.  
   Example expressions:
   - `{ ( ( x + y ) * 63 – a [ i+2 ] ) { } }` -> Output: Balanced
   - `{ ( x + y ) * 63 – a [ i+2 ] ) { } }` -> Output: Imbalanced

6. Implement a function `string convertToBinary(int)` that uses a stack to convert a decimal number to binary as a bit string.  
   Example input: 218 -> Output: 11011010

7. Implement a function `string convertInfixToPostfix(string)` that uses a stack to convert an infix expression to postfix notation.  
   Example input: `6 * 3 + 8 / 2` -> Output: `6 3 * 8 2 / +`

8. Implement a function `int evaluatePostfix(string)` that uses a stack to evaluate a postfix expression and return the result as an integer.  
   Example input: `6 3 * 8 2 / +` -> Output: 22

9. Implement a function `bool moveNthElem(QueueSLL<T>&, int n)` that moves a queue element at position `n` to the front of the queue.  
   Example: For a queue {4, 6, 8, 10} and n=3, the result is {8, 4, 6, 10}.

10. Implement a function `void reverseQueue(QueueSLL<T>&)` that reverses the elements of a queue using a stack.

### Main Function Menu

1. Check for balanced brackets.
2. Convert to binary.
3. Convert infix to postfix expression and evaluate.
4. Move Nth element to the front in a queue of strings.
5. Reverse elements of a queue of doubles.

### Submission Notes

1. Create separate files for each class:
   - `SLL.h` for the `SLL` class
   - `StackSLL.h` for the `StackSLL` class
   - `QueueSLL.h` for the `QueueSLL` class
   - `main.cpp` for the main function
   - Project file (`project.cbp`/`project.sln`)
2. Name the folder with your lab group and ID, e.g., `S5_22222222`.
3. Zip the folder for submission (e.g., `S5_22222222.zip`).

### Grading Info

- **Node Class**: 10 points
- **SLL Class**: 25 points
- **StackSLL Class**: 10 points
- **QueueSLL Class**: 10 points
- **chkBalanced**: 20 points
- **convertToBinary**: 10 points
- **convertInfixToPostfix**: 25 points
- **evaluatePostfix**: 20 points
- **moveNthElem**: 10 points
- **reverseQueue**: 10 points

**Total**: 150 points
