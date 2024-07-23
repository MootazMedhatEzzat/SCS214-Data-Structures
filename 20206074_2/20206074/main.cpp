#include <iostream>
#include <fstream>
#include <math.h>
#include "Student.h"
using namespace std;

template <class T>
int bubbleSort(T [], int);

template <class T>
void selectionSort(T [], int);

template <class T>
void insertionSort (T [], int);

template <class T>
int shellSort(T [], int);

template <class T>
void Merge(T [], int, int, int);

template <class T>
void mergeSort(T [], int, int);

int binarySearch(Student [], string, int, int);

int main()
{
    int sizeOfArray, option, numOfCompInbubbleSort, numOfCompInShellSort, numOfCompInMergeSort, result;
    string firistName, lastName, sName, sID, searchedStudent;
    double sGPA;
    ifstream input_file("students.txt");
    fstream bubbleSortedFlie, shellSortedFlie, mergeSortedFlie;
	bubbleSortedFlie.open("Bubble.txt", ios::out);
	shellSortedFlie.open("Shell.txt", ios::out);
	mergeSortedFlie.open("Merge.txt", ios::out);
    input_file >> sizeOfArray;
    //Read into 3 dynamic arrays of student objects (a1, a2 & a3) from a file named students.txt
    Student* a1 = new Student[sizeOfArray];
    Student* a2 = new Student[sizeOfArray];
    Student* a3 = new Student[sizeOfArray];
    for(int i = 0; i < sizeOfArray; i++)
    {
        input_file >> firistName;
        input_file >> lastName;
        sName = firistName + " " + lastName;
        input_file >> sID;
        input_file >> sGPA;
        a1[i].setName(sName);
        a1[i].setID(sID);
        a1[i].setGPA(sGPA);
        a2[i].setName(sName);
        a2[i].setID(sID);
        a2[i].setGPA(sGPA);
        a3[i].setName(sName);
        a3[i].setID(sID);
        a3[i].setGPA(sGPA);
    }
    //Sort the 3 arrays, using bubble, shell and merge sort
    //Each of the 3 sorted arrays saved in a separate txt file with the name of the sorting algorithm.
    numOfCompInbubbleSort = bubbleSort(a1, sizeOfArray);
    bubbleSortedFlie << "Number of comparisons = " << numOfCompInbubbleSort << endl;
    for(int i = 0; i < sizeOfArray; i++)
    {
        bubbleSortedFlie << a1[i].getName() << endl;
        bubbleSortedFlie << a1[i].getID() << endl;
        bubbleSortedFlie << a1[i].getGPA() << endl;
    }
    bubbleSortedFlie.close();

    numOfCompInShellSort = shellSort(a2, sizeOfArray);
    shellSortedFlie << "Number of comparisons = " << numOfCompInShellSort << endl;
    for(int i = 0; i < sizeOfArray; i++)
    {
        shellSortedFlie << a2[i].getName() << endl;
        shellSortedFlie << a2[i].getID() << endl;
        shellSortedFlie << a2[i].getGPA() << endl;
    }
    shellSortedFlie.close();

    mergeSort(a3, 0, (sizeOfArray - 1));
    numOfCompInMergeSort = (sizeOfArray - 1);
    mergeSortedFlie << "Number of comparisons = " << numOfCompInMergeSort << endl;
    for(int i = 0; i < sizeOfArray; i++)
    {
        mergeSortedFlie << a3[i].getName() << endl;
        mergeSortedFlie << a3[i].getID() << endl;
        mergeSortedFlie << a3[i].getGPA() << endl;
    }
    mergeSortedFlie.close();

    cout << "1- Show number of comparisons and sorted array of bubble sort" << endl;
    cout << "2- Show number of comparisons and sorted array of shell sort" << endl;
    cout << "3- Show number of comparisons and sorted array of merge sort" << endl;
    cout << "4- Search for a student by name" << endl;
    cout << "5- Exit" << endl;
    cout << "->Choose an option from the above options: ";

    cin >> option;

    while(option < 1 || option > 5)
    {
        cout << "Please choose an option from the above options: ";
        cin >> option;
    }
    while(option >= 1 || option <= 5)
    {
        if(option == 1)
        {
            cout << "Number of comparisons = " << numOfCompInbubbleSort << endl;
            for(int i = 0; i < sizeOfArray; i++)
            {
                a1[i].print();
            }
        }
        else if(option == 2)
        {
            cout << "Number of comparisons = " << numOfCompInShellSort << endl;
            for(int i = 0; i < sizeOfArray; i++)
            {
                a2[i].print();
            }
        }
        else if(option == 3)
        {
            cout << "Number of comparisons = " << numOfCompInMergeSort << endl;
            for(int i = 0; i < sizeOfArray; i++)
            {
                a3[i].print();
            }
        }
        else if(option == 4)
        {
            cin.ignore();
            cout << "Enter the name of student: ";
            getline(cin, searchedStudent);
            result = binarySearch(a1, searchedStudent, 0, 4);
            if(result == -1)
                cout << "Student Not Found" << endl;
            else
                a1[result].print();
        }
        else if(option == 5)
        {
            cout << "^-^ Thank You For Using Our Program ^-^";
            return 0;
        }

        cout << "->Choose another option or press the number 5 to end the program: ";

        cin >> option;
        while(option < 1 || option > 5)
        {
        cout << "->Choose another option or press the number 5 to end the program: ";
        cin >> option;
        }
    }
    delete[] a1;
    delete[] a2;
    delete[] a3;

    return 0;
}

template <class T>
int bubbleSort(T arrayOfData[], int sizeOfArrayOfData)
{
    int numberOfComarisons = 0;
    for (int i = 0; i < (sizeOfArrayOfData-1); i++)
    {
        for (int j = 1; j < (sizeOfArrayOfData-i); j++)
        {
            numberOfComarisons++;
            if (arrayOfData[j] < arrayOfData[j-1])
            {
                T temp = arrayOfData[j];
                arrayOfData[j] = arrayOfData[j-1];
                arrayOfData[j-1] = temp;
            }
        }
    }
    return numberOfComarisons;
}

template <class T>
void selectionSort(T arrayOfData[], int sizeOfArrayOfData)
{
    for (int minimum, j, i = 0; i < (sizeOfArrayOfData-1); i++)
    {
        for (j = (i+1), minimum = i; j < sizeOfArrayOfData; j++)
        {
            if(arrayOfData[j] < arrayOfData[minimum])
            {
                minimum = j;
            }
        }
        T temp = arrayOfData[minimum];
        arrayOfData[minimum] = arrayOfData[i];
        arrayOfData[i] = temp;
    }
}

template <class T>
void insertionSort (T arrayOfData[], int sizeOfArrayOfData)
{
    for (int j, i = 1; i < sizeOfArrayOfData; i++)
    {
        T temp = arrayOfData [i];
        for (j = i;  j > 0 && temp < arrayOfData[j-1]; j--)
        {
            arrayOfData[j] = arrayOfData[j-1];
        }
        arrayOfData[j] = temp;
    }
}

template <class T>
void Merge(T arrayOfData[], int left, int middle, int right)
{
    int numberOfComarisons = 0;
    int sizeOfLeftSubArray = middle - left + 1;
    int sizeOfRightSubArray = right - middle;

    T leftSubArray[sizeOfLeftSubArray];
    T rightSubArray[sizeOfRightSubArray];

    for(int i = 0; i < sizeOfLeftSubArray; i++)
    {
        leftSubArray[i] = arrayOfData[left + i];
    }
    for(int j = 0; j < sizeOfRightSubArray; j++)
    {
        rightSubArray[j] = arrayOfData[middle + 1 + j];
    }

    int indexOfMergedArray = left;
    int indexOfLeftSubArray = 0;
    int indexOfRightSubArray = 0;

    while(indexOfLeftSubArray < sizeOfLeftSubArray && indexOfRightSubArray < sizeOfRightSubArray)
    {
        numberOfComarisons++;
        if(leftSubArray[indexOfLeftSubArray] < rightSubArray[indexOfRightSubArray])
        {
            arrayOfData[indexOfMergedArray] = leftSubArray[indexOfLeftSubArray];
            indexOfLeftSubArray++;
        }
        else
        {
            arrayOfData[indexOfMergedArray] = rightSubArray[indexOfRightSubArray];
            indexOfRightSubArray++;
        }
        indexOfMergedArray++;
    }
    while(indexOfLeftSubArray < sizeOfLeftSubArray)
    {
        arrayOfData[indexOfMergedArray] = leftSubArray[indexOfLeftSubArray];
        indexOfMergedArray++;
        indexOfLeftSubArray++;
    }
    while(indexOfRightSubArray < sizeOfRightSubArray)
    {
        arrayOfData[indexOfMergedArray] = rightSubArray[indexOfRightSubArray];
        indexOfMergedArray++;
        indexOfRightSubArray++;
    }
}

template <class T>
void mergeSort(T arrayOfData[], int firistIndexInLeftSubArray, int lastIndexInRightSubArray)
{
    int numberOfComarisons = 0;
    if (firistIndexInLeftSubArray >= lastIndexInRightSubArray)
        return; // Returns recursively

    int middle = firistIndexInLeftSubArray + (lastIndexInRightSubArray - firistIndexInLeftSubArray) / 2;
    mergeSort(arrayOfData, firistIndexInLeftSubArray, middle);
    mergeSort(arrayOfData, middle + 1, lastIndexInRightSubArray);
    Merge(arrayOfData, firistIndexInLeftSubArray, middle, lastIndexInRightSubArray);
}

template <class T>
int shellSort( T arrayOfData[], int sizeOfArrayOfData)
{
    int numberOfComarisons = 0;
    for(int gap = (pow(2, (int)(log(sizeOfArrayOfData)/log(2)))-1); gap > 0; gap = (gap/2))
    {
        for(int i = gap; i < sizeOfArrayOfData; i++)
        {
            numberOfComarisons++;
            T temp = arrayOfData[i];
            int j = i;
            for(j; j >= gap && temp < arrayOfData[j-gap]; j = (j-gap))
            {
                arrayOfData[j] = arrayOfData[j-gap];
            }
            arrayOfData[j] = temp;
        }
    }
    return numberOfComarisons;
}

int binarySearch(Student studentArray[], string target, int left, int right)
{
  // Repeat until the pointers left and right meet each other
  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (studentArray[mid].getName() == target)
      return mid;

    if (studentArray[mid].getName() < target)
      left = mid + 1;

    else
      right = mid - 1;
  }

  return -1;
}
