# SCS214-Data-Structures
---

<div align="center">
  <table width="100%">
    <tr>
      <td colspan="2" align="center"><strong>{ Assignment-1-DS }</strong></td>
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

## Assignment 1

Cairo University  
Faculty of Computers and Artificial Intelligence  
Data Structures Course (Spring 2022) 

### 📋 Instructions

1. **Deadline**: The submission deadline is **Friday, Mar. 11th at 11:55 PM**.
2. **Submission**: Submit your assignment via **Blackboard**.
3. **Late Submissions**: 🚫 No late submissions will be accepted.
4. **Submission Method**: 🚫 Do not submit via email.
5. **File Format**: You must submit a single **C++ file** named `StudentID.cpp`. No compressed files (.rar, .zip) or folders are allowed. The file should strictly follow this format:
   - Example: If your student ID is **20202020**, your file should be named `20202020.cpp`.
   - The character separating the IDs is an **underscore (_)**. Do not use any other characters (like spaces, dashes, brackets, etc.).
6. **Cheating Policy**: 🚫 Any form of cheating will result in a **negative grade**. This applies whether you:
   - Give your code to someone else.
   - Take code from someone or the internet.
   - Send your code to someone for any reason.
7. **Code Quality**: Ensure you write **clean code** and follow a good coding style. Use meaningful variable names and maintain code readability.

### 🛠️ Task

You are required to implement a class called `IntegerSet` for managing sets of integers within the range of 0 to 100. The set should be represented internally as an array of ones and zeros:
- **Array element `a[i]`**:
  - **1**: Indicates integer `i` is part of the set.
  - **0**: Indicates integer `i` is **not** part of the set.

### Class Specifications

- **Default Constructor**: Initializes the set to the “empty set” (i.e., an array containing all zeros).
  
- **Member Functions**:
  - `unionOfSets`: Creates a third set that represents the **union** of two existing sets.
  - `intersectionOfSets`: Creates a third set that represents the **intersection** of two existing sets.
  - `insertElement`: Adds a new integer `k` to the set (sets `a[k]` to 1).
  - `deleteElement`: Removes an integer `m` from the set (sets `a[m]` to 0).
  - `printSet`: Prints the set as a list of numbers separated by spaces. If the set is empty, print `---`.
  - `isEqualTo`: Determines if two sets are equal.

- **Additional Constructor**:
  - Receives an **array of integers** and the size of the array to initialize the set object.

- **Operators**:
  - `-` (Set Difference): Allows set difference operations. For example, `s1 = s2 - s3` results in `s1` containing elements in `s2` that are **not** in `s3`.
  - `!` (Set Complement): Allows complement operations. For example, `s2 = !s1` results in `s2` containing all elements that are **not** in `s1`.

### 📝 Testing

In your `main` function, write a **driver program** to test the `IntegerSet` class. Create multiple instances of `IntegerSet` and ensure all member functions are tested and working correctly.

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
