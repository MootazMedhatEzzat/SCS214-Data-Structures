# SCS214-Data-Structures
---

<div align="center">
  <table width="100%">
    <tr>
      <td colspan="2" align="center"><strong>{ Assignment-1 }</strong></td>
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

## Assignment 1

Cairo University  
Faculty of Computers and Artificial Intelligence  
Data Structures Course (Spring 2024) 

### Instructions

2. The deadline for submission is Friday, Mar. 11th at 11:55 pm.
3. Submission will be on Blackboard.
4. No late submissions are allowed.
5. No submission through e-mails.
6. You will write a C++ file with the name `StudentID.cpp`. No rar or zip files are allowed. No folders, just submit a single file. For example, if your ID is 20202020 and your partner's ID is 19191919, then your C++ file will be named `20202020_19191919.cpp`. The character separating the IDs is an underscore (_). Do not use any other characters like a space, dash, or bracket, etc.
7. In case of cheating, you will receive a negative grade whether you give the code to someone, take the code from someone/internet, or even send it to someone for any reason.
8. You have to write clean code and follow a good coding style, including choosing meaningful variable names.

### Task

Create a class `IntegerSet` for which each object can hold integers in the range 0 through 100. A set is represented internally as an array of ones and zeros. Array element `a[i]` is 1 if integer `i` is in the set. Array element `a[j]` is 0 if integer `j` is not in the set.

- The default constructor initializes a set to the so-called “empty set,” i.e., a set whose array representation contains all zeros.
- Provide member functions for the common set operations. For example:
  - `unionOfSets` member function: Creates a third set that is the set-theoretic union of two existing sets.
  - `intersectionOfSets` member function: Creates a third set that is the set-theoretic intersection of two existing sets.
  - `insertElement` member function: Inserts a new integer `k` into a set (by setting `a[k]` to 1).
  - `deleteElement` member function: Deletes integer `m` (by setting `a[m]` to 0).
  - `printSet` member function: Prints a set as a list of numbers separated by spaces. Print only those elements that are present in the set. Print `---` for an empty set.
  - `isEqualTo` member function: Determines whether two sets are equal.
  - Additional constructor: Receives an array of integers and the size of that array and uses the array to initialize a set object.
  - Provide set difference using the operator `-`. For example, `s1 = s2 - s3` will result in `s1` having the elements in `s2` that are not in `s3`.
  - Provide set complement using the operator `!`. For example, `s2 = !s1` will result in `s2` having all of the elements that are not in `s1`.

- Now write a driver program (`main`) to test your `IntegerSet` class. Instantiate several `IntegerSet` objects and test that all your member functions work properly.
