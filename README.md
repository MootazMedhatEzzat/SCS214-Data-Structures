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

### 📋 Instructions

1. **Deadline**: The submission deadline is **Sunday, May 8th at 11:55 pm**.
2. **Submission**: Submit your assignment via **Blackboard**.
3. **Late Submissions**: 🚫 No late submissions will be accepted.
4. **Submission Method**: 🚫 Do not submit via email.
5. **Submission Notes**: Follow the **Submission Notes** listed below.
6. **Cheating Policy**: 🚫 Any form of cheating will result in a **negative grade**. This applies whether you:
   - Give your code to someone else.
   - Take code from someone or the internet.
   - Send your code to someone for any reason.
7. **Code Quality**: Ensure you write **clean code** and follow a good coding style. Use meaningful variable names and maintain code readability.

### 🛠️ Task

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

### 📤🔑 Important Remarks & Submission Notes

1. Create separate files for each class:
   - `SLL.h` for the `SLL` class
   - `StackSLL.h` for the `StackSLL` class
   - `QueueSLL.h` for the `QueueSLL` class
   - `main.cpp` for the main function
   - Project file (`project.cbp`/`project.sln`)
2. Name the folder with your lab group and ID, e.g., `S5_22222222`.
3. Zip the folder for submission (e.g., `S5_22222222.zip`).

### 🏆 Grading Criteria (Total: 150 points)

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

### 🛠️ Programming Language and Development Tools Used

<table align="center" border="1" cellpadding="10">
  <thead>
    <tr>
      <th>Programming Language</th>
      <th>Development Tool</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td align="center">
        <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" title="C++" alt="C++" width="40" height="40"/>
      </td>
      <td align="center">
        <img src="https://github.com/user-attachments/assets/1db36f07-698f-400f-bdd7-b3ad8f936f5d" title="Code::Blocks" alt="Code::Blocks" width="40" height="40"/>
      </td>
    </tr>
    <tr>
      <td align="center">
        C++
      </td>
      <td align="center">
        Code::Blocks IDE
      </td>
    </tr>
  </tbody>
</table>

---

## 💬 Let's Connect
Feel free to reach out to me if you'd like to collaborate on a project or discuss technology! As a Software Engineer, I'm always open to tackling new challenges, sharing knowledge, and growing through collaborative opportunities.

**Mootaz Medhat Ezzat Abdelwahab**  
🎓 Software Engineering Graduate | Faculty of Computers and Artificial Intelligence, Cairo University  

[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/mootaz-medhat-ezzat-abdelwahab-377a60244)
