Data Structures and Algorithms in C++
This repository contains implementations of various data structures and algorithms in C++. It includes the following structures and algorithms:

Data Structures:

Stack (Pile)

Linked List (Liste Chainée)

Vector (Vecteur)

Algorithms:

Sorting Algorithms:

Bubble Sort (bubblesort)

Insertion Sort (triInsert)

Quick Sort (quicksort)

Interclass Sort (interclass)

Postfix Evaluation (expost)

Table of Contents
Introduction

Data Structures

Stack

Linked List

Vector

Algorithms

Bubble Sort

Insertion Sort

Quick Sort

Interclass Sort

Postfix Evaluation

How to Run

Contributing

Introduction
This project implements common data structures and algorithms that are fundamental to computer science. The goal is to provide easy-to-understand and efficient implementations in C++ for educational and practical purposes.

Data Structures
Stack
The Stack is implemented using an array, supporting the typical push and pop operations. It follows a Last-In-First-Out (LIFO) principle.

Files:
stack.cpp: Implementation of the Stack data structure.

stack.h: Header file for the Stack class.

Linked List (Liste Chainée)
The Linked List is implemented to hold a collection of elements where each element points to the next. The list supports operations such as insertion and deletion.

Files:
linkedlist.cpp: Implementation of the Linked List data structure.

linkedlist.h: Header file for the Linked List class.

Vector (Vecteur)
The Vector is implemented to allow dynamic resizing of an array. It supports access by index, insertion, deletion, and resizing of the array.

Files:
vector.cpp: Implementation of the Vector class.

vector.h: Header file for the Vector class.

Algorithms
Bubble Sort (bubblesort)
Bubble Sort is a simple comparison-based algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

File:
bubblesort.cpp: Implementation of the Bubble Sort algorithm.

Insertion Sort (triInsert)
Insertion Sort builds the sorted array one element at a time. It works by inserting elements into their correct position relative to the already sorted portion.

File:
insertionSort.cpp: Implementation of the Insertion Sort algorithm.

Quick Sort (quicksort)
Quick Sort is a highly efficient divide-and-conquer algorithm. It picks an element as a pivot and partitions the array into two sub-arrays that are then recursively sorted.

File:
quicksort.cpp: Implementation of the Quick Sort algorithm.

Interclass Sort (interclass)
Interclass Sort is another comparison-based sorting algorithm. It involves organizing data in classes and sorting them using a predefined strategy.

File:
interclassSort.cpp: Implementation of the Interclass Sort algorithm.

Postfix Evaluation (expost)
The Postfix Evaluation algorithm evaluates postfix expressions using a stack. It processes the expression from left to right and evaluates the operators as they are encountered.

File:
postfixEval.cpp: Implementation of the Postfix Evaluation algorithm.

How to Run
Prerequisites
A C++ compiler (e.g., GCC, Clang, or Visual Studio).

C++ C++11 or later.

Steps
Clone the repository:

bash
Copier
Modifier
git clone git@github.com:Donovan700/DSA-package.git
cd data-structures-and-algorithms
Compile the desired file using the following command (e.g., for Bubble Sort):

bash
Copier
Modifier
g++ bubblesort.cpp -o bubblesort
Run the compiled file:

bash
Copier
Modifier
./bubblesort
Similarly, you can compile and run other algorithms or data structure implementations by modifying the filename accordingly.

Contributing
We welcome contributions to this project! If you'd like to add new features, fix bugs, or improve documentation, please follow these steps:

Fork the repository.

Create a new branch (git checkout -b feature-branch).

Commit your changes (git commit -am 'Add new feature').

Push to the branch (git push origin feature-branch).

Create a new pull request.