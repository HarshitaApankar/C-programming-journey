# 📘 Day 16 – Library Management System

## 📚 Project Title

**Library Management System (C Language)**

--

## 📌 Description

This project is a menu-driven Library Management System written in C.

It allows users to:

* Add new books
* View all books
* Search books by ID
* Issue books
* Return books
* Save records to file
* Load records from file

The system uses structures and file handling to simulate a real-world inventory system.

---

## 🛠 Concepts Used

* Structures
* Arrays of Structures
* Functions
* File Handling (`fopen`, `fprintf`, `fscanf`, `fclose`)
* Menu-driven programming
* Searching logic
* Inventory management logic
* Loop control (`for`, `while`)
* Conditional statements

---

## ⚙ Features

### 1️⃣ Add Book

Stores book ID, title, author, and quantity.

### 2️⃣ View All Books

Displays all available books in the system.

### 3️⃣ Search Book by ID

Finds a specific book using its ID.

### 4️⃣ Issue Book

Decreases quantity if book is available.

### 5️⃣ Return Book

Increases quantity when a book is returned.

### 6️⃣ Save to File

Saves all book records to `library.txt`.

### 7️⃣ Load from File

Loads book records from `library.txt`.

### 8️⃣ Exit

Closes the program safely.

---

## 📂 File Structure

```
Day16_LibraryManagementSystem.c
library.txt   (generated after saving)
README.md
```

---

## ▶ How to Run

Compile and run using:

```bash
gcc library_management_system.c -o library
./library
```

---

## 🧠 What I Learned

* How inventory systems work
* Managing stock using quantity logic
* Implementing search functionality
* Using file handling for data persistence
* Writing modular and structured C programs
* Debugging logical and file-based errors

---

## 🚀 Future Improvements

* Delete book feature
* Update book details
* Admin login system
* Use binary file handling
* Improve user interface formatting
* Prevent duplicate book IDs
* Allow multi-word book titles

---

## 🎯 Project Level

This project simulates a real-world mini inventory management system and strengthens understanding of structured programming in C.
