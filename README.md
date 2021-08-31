# DSA learning and practice

![Language](https://img.shields.io/badge/language-C++-red.svg)&nbsp;
![License](https://img.shields.io/badge/license-MIT-blue.svg)&nbsp;
![Update](https://img.shields.io/badge/update-daily-purple.svg)&nbsp;
![Problems](https://img.shields.io/badge/problems-28-brown.svg)&nbsp;

Use the index given below to search for problems and solutions. Problems are sorted in ascending order of difficulty.

## Index of Content

* [Introduction](#-Introduction)<br>
* [Big-O Notation](#-the-big-o-notation)<br>
* [Arrays](#-arrays)<br>
* [Linked Lists](#-linked-lists)
<br>

## 🟧 Introduction
### What is data structure(DS)?
A way of organizing data, so it can be used effectively.

### Why do we use them?
* To create fast and powerful algorithms
* To make code easier for understanding

### What is abstract data type(ADT)?
An abstraction of a DS which provides only an interface. An interface is not specific to any programming language, instead, it's completely free of all of them.<br>
ADTs are implemented using data structures.<br>
<br>
Some examples are :

|  #  | ADT        |  Implementation(DS) |
|-----| --------------- | -----------  |
|  1  | Lists | Dynamic Array <br> Linked List |
|  2  | Queue | Array based queue <br> Stack based queue <br> Linked List based queue |
|  3  | Maps | Hash table <br> Tree |
<br>


## 🟧 The Big-O Notation
### What is Big-O and why do we use it?
Big-O notation helps us identify the time and space complexity of an algorithm. There are many other notations as well, like, Big-Theta, or, Big-Omega, but we use Big-O because it deals with the worst case scenario of an algorithm, i.e., when the size of input tends to infinity.<br>

Size of input is denoted by 'n'. <br>

### Ascending order of complexity

|  #  | Notation        |  Name        |  Example (time)   |
|-----| --------------- | -----------  | ----------- |
|  1  |  O (1)          | Constant     | Accessing an array |
|  2  |  O (log n)      | Logarithmic  | Binary search |
|  3  |  O (n)          | Linear       | Traversing an array |
|  4  |  O (n log n)    | Linearithmic | Merge sort |
|  5  |  O (n^2)        | Quadratic    | 2 Nested loops |
|  6  |  O (n^3)        | Cubic        | 3 Nested loops |
| ... |  |  |  |
|  7  |  O (nm)         | O of n m     | Iterating over a matrix of (n X m) |
| ... |  |  |  |
|  8  |  O (b^n)        | Exponential  | All subsets of a set -> O (2^n) |
|  9  |  O (n!)         | Factorial    | All permutations of a string |

<br/>
<div align="right">
    <b><a href="#index-of-content">⬆️ Back to Top</a></b>
</div>
<br/>

## 🟧 Arrays
### Property
Each and every element is indexable(can be referenced with a number) from range 0 to n-1. 'n' is the size of array. <br>
Used :- <br>
* for sorting
* to access sequential data
* as buffer by I/O routines
* as lookup / inverse lookup tables
* to return mmultiple values from a function
* as *cache* in dynamic programming

### Types
♦️*Static* : fixed length<br>

♦️*Dynamic* : variable length; implemented using static array; when size capacity is reached, a new static array of double size is created and elements are copied. <br>
<br>

### Problems on arrays
Key : 🟢(Easy), 🟡(Medium), 🔴(Hard)

|  #  | Title                                   |  Solution       |  Time           | Space           | Difficulty    | Tags         | Note| 
|-----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------|-----|
|1929  | [Concatenation of array](https://leetcode.com/problems/concatenation-of-array)  | [C++](./C++/1929.cpp) |||🟢| | |
|1920  | [Build array from permutation](https://leetcode.com/problems/build-array-from-permutation)  | [C++](./C++/1920.cpp) |||🟢| | |
|1480  | [Running sum of 1D array](https://leetcode.com/problems/running-sum-of-1d-array)  | [C++](./C++/1480.cpp) |||🟢| | |
|1672  | [Richest customer wealth](https://leetcode.com/problems/richest-customer-wealth)  | [C++](./C++/1672.cpp) |||🟢| |matrix|
|1470  | [Shuffle the array](https://leetcode.com/problems/shuffle-the-array)  | [C++](./C++/1470.cpp) |||🟢| | |
|1431  | [Kids with greatest number of candies](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies)  | [C++](./C++/1431.cpp)|||🟢| | |
|1512  | [Number of good pairs](https://leetcode.com/problems/number-of-good-pairs)  | [C++](./C++/1512.cpp) |||🟢| |hash table|
|1365  | [How many numbers are smaller than current number](https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number)  | [C++](./C++/1365.cpp) |||🟢| |frequency array|
|1528  | [Shuffle string](https://leetcode.com/problems/shuffle-string)  | [C++](./C++/1528.cpp) |||🟢| ||
|1720  | [Decode XORed array](https://leetcode.com/problems/decode-xored-array)  | [C++](./C++/1720.cpp) |||🟢| |XOR property|
|0001  | [Two Sum](https://leetcode.com/problems/two-sum/)  | [C++](./C++/0001.cpp) |O(n)|O(1)|🟢| | hash table|
|0026  | [Remove duplicates from sorted array](https://leetcode.com/problems/remove-duplicates-from-sorted-array)| [C++](./C++/0026.cpp) |      |   |🟢|||
|0027  | [Remove Element](https://leetcode.com/problems/remove-element) | [C++](./C++/0027.cpp) |||🟢|||
|0035  | [Search insert position](https://leetcode.com/problems/search-insert-position) | [C++](./C++/0035.cpp) |||🟢|||
|0053  | [Maximum subarray](https://leetcode.com/problems/maximum-subarray) | [C++](./C++/0053.cpp) |||🟢||Kadane's algorithm|
|0066  | [Plus One](https://leetcode.com/problems/plus-one) | [C++](./C++/0066.cpp) |||🟢|||
|0088  | [Merge sorted array](https://leetcode.com/problems/merge-sorted-array) | [C++](./C++/0088.cpp) |||🟢|||
|0018  | [4 Sum](https://leetcode.com/problems/4sum)  | [C++](./C++/0018.cpp) |||🟡|||
|0128  | [Longest consecutive sequence](https://leetcode.com/problems/longest-consecutive-sequence) | [C++](./C++/0128.cpp) |||🟡|||
|0004  | [Median of two sorted arrays](https://leetcode.com/problems/median-of-two-sorted-arrays)  | [C++](./C++/0004.cpp) |||🔴||binary search,<br>careful of bounds|
|0992  | [Subarrays with k different integers](https://leetcode.com/problems/subarrays-with-k-different-integers) | [C++](./C++/0992.cpp) |||🔴|||



<br/>
<div align="right">
    <b><a href="#index-of-content">⬆️ Back to Top</a></b>
</div>
<br/>

## 🟧 Linked Lists
### What is it?
A sequential list of data holding nodes that point to other nodes.

### Uses
* Stack, queue, list, circular list implementation
* Adjancy list for graphs
* Separate chaining to deal with hashing collisions

### Properties
*Node* : contains data and pointer <br>
*Pointer* : reference to another node <br>
*Head* : first node in the list <br>
*Tail* : last node in the list <br>

### Types
* Singly linked list : reference to next node only <br>
* Doubly linked list : reference to next and previous nodes <br>

| Type | Pros       | Cons        |
|-----| --------------- | -----------  | 
|  Singly  |  Less memory usage, <br> Simple implementation | Difficult to access previous element    |
|  Doubly  |  Backward traversal possible          | Takes much more memory <br> (Pointers can take lot of memory) | 
<br>

### Complexity Analysis
| Action | Singly LL | Doubly LL  |
|-----| --------------- | -----------  | 
| Search | O (n) | O (n) |
| Insert at head | O (1) | O (1) |
| Insert at tail | O (1) | O (1) |
| Remove at head | O (1) | O (1) |
| Remove at tail | O (n) | O (1) |
| Remove in between | O (n) | O (n) |
<br>

### Problems on linked lists

|  #  | Title           |  Solution       |  Time           | Space           | Difficulty    | Tags         | Note| 
|-----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------|-----|
| 1290 | [Convert binary number in a linked list to integer](https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer) | [C++](./C++/1290.cpp) |||🟢||bruteforce|
| 876 | [Middle of the linked list](https://leetcode.com/problems/middle-of-the-linked-list) | [C++](./C++/876.cpp) |||🟢||bruteforce|

<br/>
<div align="right">
    <b><a href="#index-of-content">⬆️ Back to Top</a></b>
</div>
<br/>
