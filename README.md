# DSA learning and practice

![Language](https://img.shields.io/badge/language-Modern%20C++-orange.svg)&nbsp;
![License](https://img.shields.io/badge/license-MIT-blue.svg)&nbsp;
![Update](https://img.shields.io/badge/update-daily-green.svg)&nbsp;

<br>
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

♦️*Dynamic* : variable length; implemented using dynamic array; when size capacity is reached, a new static array of double size is created and elements are copied. <br>

### Problems on arrays

Key : <br>
* 🟢 = Easy
* 🟠 = Medium
* 🔴 = Hard
<br>
|  #  | Title                                   |  Solution       |  Time           | Space           | Difficulty    | Tag          | Note| 
|-----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------|-----|
|0001  | [Two Sum](https://leetcode.com/problems/two-sum/)  |        |   O(n)   | O(1)   | 🟢 | array, <br> hash table| use unordered map|
|0026  | [Remove duplicates from sorted array](https://leetcode.com/problems/remove-duplicates-from-sorted-array)  |        |      |   |🟢 |||
|0027  | [Remove Element](https://leetcode.com/problems/remove-element)  ||||🟢 |||
|0035  | [Search insert position](https://leetcode.com/problems/search-insert-position) ||||🟢|||
|0053  | [Maximum subarray](https://leetcode.com/problems/maximum-subarray) |||| 🟢  |||
|0018  | [4 Sum](https://leetcode.com/problems/4sum)  |||| 🟠 |||
|0128  | [Longest consecutive sequence](https://leetcode.com/problems/longest-consecutive-sequence) ||||🟠 |||
|0004  | [Median of two sorted arrays](https://leetcode.com/problems/median-of-two-sorted-arrays)  |||| 🔴|||
|0992  | [Subarrays with k different integers](https://leetcode.com/problems/subarrays-with-k-different-integers) |||| 🔴 |||



<br/>
<div align="right">
    <b><a href="#index-of-content">⬆️ Back to Top</a></b>
</div>
<br/>

## 🟧 Linked Lists

<br/>
<div align="right">
    <b><a href="#index-of-content">⬆️ Back to Top</a></b>
</div>
<br/>
