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
      <td align="right"><strong>Group</strong>: B (S4)</td>
    </tr>
    <tr>
      <td colspan="2" align="center"><strong>Delivered To</strong>: Prof. Basheer Abdel Fatah</td>
    </tr>
  </table>
</div>

---

## Assignment 2

Cairo University  
Faculty of Computers and Artificial Intelligence  
Data Structures Course (Spring 2024) 

### Instructions

1. Students will form teams of 2 students (from the same lab group).
2. The deadline for submission is Sunday, April 3rd at 11:55 pm.
3. Submission will be on Blackboard.
4. No late submissions are allowed.
5. No submission through e-mails.
6. Please follow the Submission Notes found below.
7. In case of cheating, you will receive a negative grade whether you give the code to someone, take the code from someone/internet, or even send it to someone for any reason.
8. You have to write clean code and follow a good coding style, including choosing meaningful variable names.

### Task

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

### Submission Notes

- Your project should include two code files: `student.h` and `main.cpp`, along with the project file (extension `cbp`).
- Copy the 3 files into a new folder named by your IDs, then compress it into a zip file for submission.

### Grading Info

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

Total: 130 points
