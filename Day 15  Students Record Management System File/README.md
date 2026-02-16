📘 DAY 15 – Student Record Management System

Student Record Management System (C Language)

📌 Description

This project is a file-based Student Management System built in C.
It allows adding, viewing, saving, loading, and deleting student records.

🛠 Concepts Used
   
    Structures
    Structure Arrays
    File Handling (fscanf, fprintf)
    Temporary file deletion method
    Menu Driven System
    Loop control
    Record Searching
    Record Deletion from File

⚙ Features

    Add student
    View all students
    Save records to file (student.txt)
    Load records from file
    Delete specific student record from file
    Exit system

🧠 Special Implementation

       Deletion is handled using:
       Temporary file method
       remove() and rename() functions
    This is the standard professional approach in C for deleting file records.

📂 File Structure
         
      Day15_StudentManagement.c
      student.txt (generated after saving)
      temp.txt (temporary file for deletion process)



🎯 What I Learned

    Advanced file handling in C
    How to delete specific records from file
    Managing persistent data
    Writing modular programs
    Handling user input safely
    Debugging segmentation and format errors

🚀 Future Improvements

    Search student by roll number
    Update student marks
    Calculate average marks
    Find topper
    Improve input validation



