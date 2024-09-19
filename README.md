# SCS214-Data-Structures
---

<div align="center">
  <table width="100%">
    <tr>
      <td colspan="2" align="center"><strong>{ Assignment-2-DS }</strong></td>
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

## Assignment 2

Cairo University  
Faculty of Computers and Artificial Intelligence  
Data Structures Course (Spring 2022) 

### 📋 Instructions

1. **Deadline**: The submission deadline is **Sunday, April 3rd at 11:55 PM**.
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

Assuming you have a class `Student`:

1. Implement the class constructor and `print` member function.
2. Overload the operator `<` such that it compares the names of two student objects.
3. Save the class declaration and implementation in a single header file named `Student.h`.
4. Include your `Student.h` in the main file.
5. Implement the following as template functions:
   - A quadratic sorting algorithm (bubble, selection, or insertion).
   - The sub-quadratic algorithm Shell Sort with Hibbard’s increments.
   - Another sub-quadratic algorithm (quick or merge sort).

#### Student Class Structure
```cpp
class Student {
    string name;
    string id;
    double gpa;
public:
    Student(string, string, double);
    void print();
};
```

6. Read into 3 dynamic arrays of student objects (a1, a2 & a3) from a file named `students.txt`, which will contain the number of students followed by their information.
7. Sort the 3 arrays, each using one of the 3 sorting algorithms implemented in step 5. For example, `a1` will be sorted using selection sort, `a2` using shell sort, and `a3` using quick sort.
8. Each of the 3 sorted arrays should be saved in a separate text file named after the sorting algorithm used, e.g., `Bubble.txt`, `Shell.txt`, and `Merge.txt`.
9. Count the comparisons for each of the sorting algorithms and include the number of comparisons as the first line in the respective text file containing the sorted array.
10. Implement a binary search algorithm to work on any of your sorted student arrays. The search should return the index or -1 if not found when given a student’s name. A binary search has better complexity (O(log N)) than a linear search (O(N)).
11. In `main`, you should:
    - Read from `students.txt` to fill the 3 arrays.
    - Call each of the sorting algorithms on each of the arrays.
    - Save the results to 3 text files, one for each sort.
    - Display a menu for user interaction, allowing the display of sorted results and performing searches.

### 📤 Submission Instructions

- Your project should include two code files: `student.h` and `main.cpp`, along with the project file (extension `cbp`).
- Copy the 3 files into a new folder named by your ID, then compress it into a zip file for submission.

### 🏆 Grading Criteria (Total: 130 points)

- **Student Class**: 5 points
- **Quadratic Sorting Algorithm**: 20 points
- **Shell Sort**: 25 points
- **Sub-Quadratic Sorting Algorithm**: 20 points
- **Use Templates**: 10 points
- **Read from File into Arrays**: 5 points
- **Write Sorted Arrays into Files**: 5 points
- **Binary Search**: 10 points
- **Number of Comparisons**: 10 points
- **Separate Header File**: 5 points
- **Correct Naming/Submission**: 15 points

---

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

