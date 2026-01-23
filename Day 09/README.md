##Day 9 – Recursion in C

--Recursion is a programming technique where a function calls itself to solve a problem by breaking it into smaller subproblems.

A recursive function must have:
1. *Base Case*– condition where recursion stops
2. *Recursive Case* – function calling itself

Without a base case, recursion will run infinitely.

---

## Why Recursion is Used?
- Simplifies complex problems
- Reduces code for repetitive logic
- Useful in problems like:
  - Factorial
  - Fibonacci series
  - Tree traversal
  - Searching & sorting algorithms

---

## 🔁 General Structure of Recursive Function

function() {
    if(base condition)
        return value;
    else
        return function(smaller input);
}

## Programs:
1. Factorial using recursion
2. Fibonacci series using recursion
3. Sum of digits using recursion

## Concepts Used:
- Recursive function calls
- Base condition
- Stack behavior

