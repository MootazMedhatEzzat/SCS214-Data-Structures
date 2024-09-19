# SCS214-Data-Structures
---

<div align="center">
  <table width="100%">
    <tr>
      <td colspan="2" align="center"><strong>{ Assignment-4-DS }</strong></td>
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

## Assignment 4

Cairo University  
Faculty of Computers and Artificial Intelligence  
Data Structures Course (Spring 2022) 

### 📋 Instructions

1. **Deadline**: The submission deadline is **Monday, May 30th at 11:55 pm**.
2. **Submission**: Submit your assignment via **Blackboard**.
3. **Late Submissions**: 🚫 No late submissions will be accepted.
4. **Submission Method**: 🚫 Do not submit via email.
5. **Submission Notes**: Follow the **Submission Notes** listed below.
6. **Cheating Policy**: 🚫 Any form of cheating will result in a **negative grade**. This applies whether you:
   - Give your code to someone else.
   - Take code from someone or the internet.
   - Send your code to someone for any reason.
7. **Code Quality**: Ensure you write **clean code** and follow a good coding style. Use meaningful variable names and maintain code readability.

### Objective

In this assignment, you will implement Dijkstra’s shortest path algorithm on an undirected weighted graph. Use a min-heap to store the node labels and their current costs.

### 🛠️ Tasks

1. Create a struct to store the node label and its cost:
   ```cpp
   struct Node {
       char label;
       int cost;
   };
   ```

2. Implement a class template `MinHeap` with the following declaration:
   ```cpp
   class MinHeap {
       Node* heap; // an array of nodes
       int _size;  // size of array
   public:
       Node extractMin(); // returns & removes the node with minimum cost
       void buildMinHeap(Node[], int); // allocates array then builds a min-heap from an array of struct Node with the given size
       void minHeapify(int i, int n); // restores the min-heap property for the “heap” array using the given index and size n
       void decreaseKey(char label, int newCost); // decreases the node that has the given label to newCost
       int parent(int i); // returns the index of the parent of i
       int getSize(); // returns size of the heap
       bool inHeap(char); // checks if the node with the given label is in the heap
   };
   ```

3. Create a class `WeightedGraph` which stores a graph using an adjacency matrix with the following declaration:
   ```cpp
   class WeightedGraph {
       int** g;
       int nVertices;
   public:
       int getNVertices(); // returns the number of vertices
       int getWeight(char, char); // returns weight of the edge connecting the given vertices
       int* returnNeighbors(int v); // returns the indices of the neighbors of the vertex v as an int array
       int numNeighbors(int v); // returns the number of neighbors of the vertex v
       void loadGraphFromFile(ifstream&); // allocates the adjacency matrix & initializes edge weights from the specified file
       void dijkstra(char startVertex, char* prev, Node distances[]); // find the shortest path from the start vertex to all other vertices, by filling the prev array and the distances array
   };
   ```

### Main Function Menu

1. Your main function might look like this:
   ```cpp
   int main() {
       WeightedGraph wg;
       ifstream ifile("graph.txt");
       wg.loadGraphFromFile(ifile);
       char* p;
       p = new char[wg.getNVertices()];
       Node* n;
       n = new Node[wg.getNVertices()];
       wg.dijkstra('g', p, n);
       cout << endl << "Node\tCost\tPrevious";
       for(int i = 0; i < wg.getNVertices(); i++) {
           cout << endl << n[i].label << "\t" << n[i].cost << "\t" << p[i];
       }
       ifile.close();
       return 0;
   }
   ```

2. The file `graph.txt` will have the following format, where the first line represents the number of vertices and the second line represents the number of edges. For each of the following lines, each line has the label of the first vertex, then the label of the second vertex, then the edge weight. Note that the sample graph in this file is a directed graph.

   Example:
   ```
   8
   15
   g a 9
   g e 14
   g f 15
   a b 24
   b d 2
   b h 19
   c b 6
   c h 6
   d c 11
   d h 16
   e b 18
   e d 30
   e f 5
   f d 20
   f h 44
   ```

3. For the sample graph in `graph.txt`, the output should be:
   ```
   Node    Cost    Previous
   a       9       g
   b       32      e
   c       45      d
   d       34      b
   e       14      g
   f       15      g
   g       0       g
   h       50      d
   ```

4. Note that you can add any member or stand-alone functions you might need.

### 📤🔑 Important Remarks & Submission Notes

1. Submission will be in the form of a zip file.
2. Separate your implementation such that:
   - Class `MinHeap` declaration and implementation will be in file `MinHeap.h`
   - Class `WeightedGraph` declaration and implementation will be in file `WeightedGraph.h`
   - Your main function will be in `main.cpp`
3. Create a folder with 4 files; `MinHeap.h`, `WeightedGraph.h`, `main.cpp`, `project.cbp`/`project.sln` (do not include any other files)
4. Name the folder by your lab group, id1, and id2. Example: `S5_22222222`
5. Zip your folder (e.g., `S5_22222222.zip`)

### 🏆 Grading Criteria (Total: 90 points)

- **MinHeap::extractMin**: 5 points
- **MinHeap::parent**: 2 points
- **MinHeap::buildMinHeap**: 7 points
- **MinHeap::decreaseKey**: 10 points
- **MinHeap::minHeapify**: 10 points
- **MinHeap::getSize**: 2 points
- **MinHeap::inHeap**: 4 points
- **WeightedGraph::getNVertices**: 2 points
- **WeightedGraph::getWeight**: 5 points
- **WeightedGraph::returnNeighbors**: 7 points
- **WeightedGraph::numNeighbors**: 5 points
- **WeightedGraph::loadGraphFromFile**: 10 points
- **WeightedGraph::dijkstra**: 21 points

---

## 💬 Let's Connect
Feel free to reach out to me if you'd like to collaborate on a project or discuss technology! As a Software Engineer, I'm always open to tackling new challenges, sharing knowledge, and growing through collaborative opportunities.

**Mootaz Medhat Ezzat Abdelwahab**  
🎓 Software Engineering Graduate | Faculty of Computers and Artificial Intelligence, Cairo University  

[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/mootaz-medhat-ezzat-abdelwahab-377a60244)
