# CGPA Calculator — CodeAlpha C++ Internship

A console-based **CGPA Calculator** developed in C++ as part of the **CodeAlpha C++ Programming Internship**

# Project Overview

The CGPA Calculator allows students to enter their courses, grades, and credit hours. The program calculates the total credits, total grade points, semester GPA, and current CGPA.

It also displays the details of each course in a structured result table.

# Features

- Enter the number of courses
- Enter course name, grade, and credit hours
- Convert grades into grade points
- Calculate total credit hours
- Calculate total grade points
- Calculate GPA using credit-weighted calculation
- Display the current CGPA
- Display course-wise results
- Basic input validation
- Clean and user-friendly console interface

# Grade Point System

| Grade | Grade Point |
|-------|-------------|
| A+    | 10.0        |
| A     | 9.0         |
| B+    | 8.0         |
| B     | 7.0         |
| C     | 6.0         |
| D     | 5.0         |
| F     | 0.0         |

# Formula

# Grade Points

text
Grade Point × Credit Hours = Course Grade Points


# GPA

text
GPA = Total Grade Points / Total Credit Hours


For the current single-semester implementation, the calculated GPA is also displayed as the current CGPA.

# Technologies Used

- **Language:** C++
- **Compiler:** GCC / g++
- **IDE:** Visual Studio Code
- **Concepts:** Structures, Functions, Vectors, Loops, Conditional Statements, Input Validation

# Project Structure

```text
Task 1 CGPA Calculator/
│
├── main.cpp
└── README.md
```

# How to Run

# 1. Clone the repository

```bash
git clone <YOUR-GITHUB-REPOSITORY-URL>
```

# 2. Open the project folder

Open the project in Visual Studio Code.

# 3. Compile the program

```bash
g++ main.cpp -o cgpa
```

# 4. Run the program

On Windows:

```bash
.\cgpa
```

# Sample Input

```text
Enter number of courses: 3

Course 1
Enter course name: Cpp
Enter grade: A
Enter credit hours: 4

Course 2
Enter course name: DBMS
Enter grade: A+
Enter credit hours: 3

Course 3
Enter course name: Maths
Enter grade: B+
Enter credit hours: 4
```

# Sample Result

```text
Total Credits      : 11
Total Grade Points : 98.00
GPA                : 8.91
CGPA               : 8.91
```

# Internship Task

**Organization:** CodeAlpha  
**Domain:** C++ Programming  
**Task:** Task 1 — CGPA Calculator

# Author

**Ambati Jogeswara Durga Sai Kumar**

B.Tech — Computer Science and Engineering

---

If you find this project useful, consider giving the repository a star!