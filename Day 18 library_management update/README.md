
# 📚 Day 18 – Library Management System (Updated Version)

## 📌 Description

This project is a **menu-driven Library Management System written in C**.
It allows users to manage books in a library by performing different operations like adding books, searching, issuing, returning, deleting, updating, and storing records in a file.

This version improves the previous program by adding **delete book and update book details features**, making the system more complete.

---

## ⚙️ Features

The program provides the following operations:

1️⃣ Add Book
2️⃣ View All Books
3️⃣ Search Book by ID
4️⃣ Issue Book
5️⃣ Return Book
6️⃣ Save Records to File
7️⃣ Load Records from File
8️⃣ Delete Book
9️⃣ Update Book Details
🔟 Exit Program

---

## 🧠 Concepts Used

This project helps practice several important **C programming concepts**:

* Structures
* Arrays of Structures
* Functions
* Loops (for loop, while loop)
* Conditional Statements (if-else)
* File Handling (`fopen`, `fprintf`, `fscanf`, `fclose`)
* Menu Driven Programs
* Searching in Arrays
* Deleting Data by Shifting Elements

---

## 🗂 Structure Used

```c
struct Book
{
    int book_id;
    char title[50];
    char author[50];
    int quantity;
};
```

This structure stores all details of a book.

---

## 💾 File Handling

The program saves and loads book records using a file named:

```
library.txt
```

Functions used:

* `saveToFile()` → stores book records in file
* `loadFromFile()` → reads book records from file

---

## 🗑 Delete Book Logic

When a book is deleted, all books after that position are **shifted one step left**.

Example:

Before deletion

```
101
102
103
104
```

Delete **102**

After shifting

```
101
103
104
```

---

## ▶ How to Run the Program

Compile the program:

```
gcc library.c
```

Run the program:

```
./a.out
```

---

## 📈 Learning Outcome

By completing this project, I practiced:

* Building a **real-world console application in C**
* Using **structures for data storage**
* Implementing **file handling**
* Understanding **data manipulation (delete, update, search)**

---

⭐ This project is part of my **C Programming Learning Journey**.

---
