# Project B – CSV Database and Query Engine

## 📌 Overview
This project implements a lightweight CSV-based mini database and query engine. It allows users to store, read, and query structured data from CSV files using basic database-like operations.

The goal is to simulate how a simple database system works internally without using external DBMS.

---

## 🎯 Objectives
- Understand how data is stored and processed
- Practice parsing and data handling in C++
- Design a simple query system
- Apply software engineering concepts

---

## ⚙️ Features
- Load and parse CSV files
- Store data in memory
- Execute basic SQL-like queries
- Support:
  - SELECT columns
  - WHERE conditions
- Display query results in console

---

## 📂 Project Structure

```text
11402_CS351_ProjectB/
│
├── data/        # Sample CSV files
├── docs/        # Planning & documentation
├── include/     # Header files
├── src/         # Source code
├── tests/       # Testing files
│
└── README.md
```

---

## 🧪 Current Implementation

This project implements a simple CSV-based query engine.

### Supported Features
- CSV loading and parsing
- In-memory data storage
- Column selection (SELECT)
- Row filtering (WHERE)
- Console output formatting

---

## 📌 Example Queries

```sql
SELECT * FROM students
SELECT name,grade FROM students
SELECT name,grade FROM students WHERE major=CS
```

---

## ▶️ How to Run

```bash
g++ -std=c++11 -Iinclude src/main.cpp src/csv_database.cpp -o database
./database
```

---

## 💻 Usage

After running the program:

```text
SQL> SELECT * FROM students
SQL> SELECT name,grade FROM students
SQL> SELECT name,grade FROM students WHERE major=CS
```

To exit:

```text
exit
```

---

## 📊 Sample Output

```text
id   name   major    grade
1    Minh   CS       90
2    Anna   CS       85
3    David  Math     78
4    Lisa   CS       92
5    Tom    Physics  80
```

---

## 🚀 Future Improvements
- Support more SQL operations
- Improve query parsing
- Add better error handling
- Add unit tests

---

## 👨‍💻 Author
Minh Ly  
CS351 – 11402