# Data Structures and Algorithms in C++

This repository contains implementations of various data structures and algorithms in C++.

## Table of Contents
- [Overview](#overview)
- [Data Structures](#data-structures)
  - [Stack (Pile)](#stack)
  - [Linked List (Liste Chainée)](#linked-list)
  - [Vector (Vecteur)](#vector)
- [Algorithms](#algorithms)
  - [Sorting Algorithms](#sorting-algorithms)
    - [Bubble Sort](#bubble-sort)
    - [Insertion Sort](#insertion-sort)
    - [Quick Sort](#quick-sort)
    - [Interclass Sort](#interclass-sort)
  - [Other Algorithms](#other-algorithms)
    - [Postfix Evaluation](#postfix-evaluation)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
  - [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Overview

This project implements common data structures and algorithms that are fundamental to computer science. The implementations are designed to be easy to understand, efficient, and educational for those learning C++ and computer science concepts.

## Data Structures

### Stack

A Last-In-First-Out (LIFO) data structure implemented using an array.

**Files:**
- `expressionPost.cpp`: File containing Stack implementation

**Operations:**
- empile: Add an element to the top
- depile: Remove the top element

### Linked List

A collection of elements where each element points to the next, allowing for dynamic memory allocation.

**Files:**
- `createLinkedList.cpp`: Implementation of Linked List operations

**Operations:**
- Insert: Add elements at the beginning, end, or specific position
- Delete: Remove elements from the list
- Search: Find elements in the list
- Traverse: Iterate through all elements

### Vector

A dynamic array implementation that allows for resizing and efficient element access.

**Files:**
- `quickSort.cpp`: Implementation of Vector operations
(Most of the files are using dynamic vector with pointers)

**Operations:**
- Access by index
- Insert and delete elements
- Dynamic resizing
- Size and capacity management

## Algorithms

### Sorting Algorithms

#### Bubble Sort

A simple comparison-based algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

**File:** `bubblesort.cpp`

**Time Complexity:** O(n²)

#### Insertion Sort

Builds the sorted array one element at a time by inserting each element into its correct position relative to the already sorted portion.

**File:** `triInsert.cpp`

**Time Complexity:** O(n²)

#### Quick Sort

A highly efficient divide-and-conquer algorithm that picks an element as a pivot and partitions the array into two sub-arrays that are then recursively sorted.

**File:** `quickSort.cpp`

**Time Complexity:** Average O(n log n), Worst O(n²)

#### Interclass Sort

A comparison-based sorting algorithm that involves organizing data in classes and sorting them using a predefined strategy.

**File:** `interclass.cpp`

### Other Algorithms

#### Postfix Evaluation

An algorithm that evaluates postfix expressions using a stack, processing the expression from left to right and evaluating operators as they are encountered.

**File:** `expressionPost.cpp`

## Getting Started

### Prerequisites

- C++ compiler (GCC, Clang, or Visual Studio)
- C++11 or later

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/Donovan700/DSA-package.git
   cd DSA-package
   ```

### Usage

To compile and run any individual component, use the following commands (example for Bubble Sort):

```bash
# Compile
g++ bubblesort.cpp -o bubblesort

# Run
./bubblesort
```

## Contributing

Contributions are welcome! If you'd like to add new features, fix bugs, or improve documentation:

1. Fork the repository
2. Create a new branch (`git checkout -b feature-branch`)
3. Make your changes
4. Commit your changes (`git commit -am 'feat: adding new feature'`)
5. Push to the branch (`git push origin feature-branch`)
6. Create a new Pull Request

## License

This project is licensed under the MIT License - see the LICENSE file for details.