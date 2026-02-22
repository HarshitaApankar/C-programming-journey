
# 📘 Day 17 – Advanced Library Management System (C)

## 📚 Project Title

**Library Management System with CRUD Operations (C Language)**

---

## 📌 Description

This project is an upgraded version of the Library Management System built in C.

It is a menu-driven console application that allows users to manage book records efficiently. The system supports full CRUD operations (Create, Read, Update, Delete) along with file handling for data persistence.

This version enhances the previous implementation by adding delete and update functionality.

---

## 🛠 Concepts Used

* Structures (`struct`)
* Arrays of Structures
* Functions
* File Handling (`fopen`, `fprintf`, `fscanf`, `fclose`)
* Menu-driven programming
* Searching algorithms
* Array shifting logic (for deletion)
* Conditional statements
* Looping constructs (`for`, `while`)
* Global variables
* Basic inventory management logic

---

## ⚙ Features

### 1️⃣ Add Book

Adds a new book with:

* Book ID
* Title
* Author
* Quantity

---

### 2️⃣ View All Books

Displays all stored book records.

---

### 3️⃣ Search Book by ID

Searches and displays a specific book using its ID.

---

### 4️⃣ Issue Book

Reduces quantity if the book is available.

---

### 5️⃣ Return Book

Increases quantity when a book is returned.

---

### 6️⃣ Save to File

Saves all records into `library.txt`.

---

### 7️⃣ Load from File

Loads book records from `library.txt` into memory.

---

### 8️⃣ Delete Book

Deletes a book using:

* Book ID
* Uses array shifting logic
* Decreases record count

---

### 9️⃣ Update Book Details

Updates:

* Title
* Author
* Quantity

---

### 🔟 Exit

Closes the application safely.

---

## 🧠 Core Learning (Important)

This project demonstrates full **CRUD operations**:

* **Create** → Add Book
* **Read** → View / Search
* **Update** → Update Book
* **Delete** → Delete Book

This is how real database systems work internally.

---

## 📂 Project Structure

```
LibraryManagementSystem.c
library.txt
README.md
```

---

## ▶ How to Compile and Run

```bash
gcc LibraryManagementSystem.c -o library
./library
```

---

## 🧪 Sample Workflow

1. Add books
2. View records
3. Delete a book
4. Update a book
5. Save to file
6. Load again
7. Verify changes

---

## 🚀 Improvements Over Previous Version

✔ Added Delete functionality
✔ Added Update functionality
✔ Implemented array shifting logic
✔ Improved modular structure
✔ Full CRUD implementation

---

## 📈 Future Enhancements

* Prevent duplicate Book IDs
* Allow multi-word titles using `fgets()`
* Convert to binary file handling
* Add user authentication (Admin login)
* Implement dynamic memory allocation
* Improve UI formatting

---

## 🎯 Project Level

Intermediate C Programming Project

This project strengthens understanding of:

* Data structures using arrays
* File-based persistence
* Real-world inventory logic
* Structured programming principles

---

## 💡 Developer Note

This project was built as part of daily structured practice to strengthen core C programming and logic-building skills before moving into advanced Data Structures and Algorithms.

---

