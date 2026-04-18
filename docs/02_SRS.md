# Software Requirements Specification (SRS)

## 📌 1. Introduction

### 1.1 Purpose
This document describes the functional and non-functional requirements of the CSV Database and Query Engine system.

### 1.2 Scope
The system is a lightweight database-like application that processes CSV files and allows users to perform simple queries without using external DBMS.

---

## ⚙️ 2. Functional Requirements

### 2.1 CSV Loading
- The system shall load data from a CSV file.
- The system shall parse rows and columns correctly.

### 2.2 Data Storage
- The system shall store data in memory.
- The system shall allow access to individual records.

### 2.3 Query Operations
- The system shall support selecting specific columns.
- The system shall support filtering rows using simple conditions (WHERE).

### 2.4 Output
- The system shall display query results to the console.
- The system may support exporting results.

---

## ⚡ 3. Non-Functional Requirements

### 3.1 Performance
- The system should handle moderately sized CSV files efficiently.

### 3.2 Usability
- The system should be simple to run from the command line.

### 3.3 Maintainability
- The code should be modular and well-structured.

### 3.4 Portability
- The system should run on standard environments supporting C++.

---

## 🧠 4. System Overview

The system consists of:
- CSV Parser: reads and interprets CSV files
- Data Storage: holds parsed data in memory
- Query Engine: processes filtering and selection
- Output Module: displays results

---

## ⚠️ 5. Constraints
- No external database systems allowed
- Limited to basic query features
- Assumes reasonably well-formatted CSV input

---

## 📌 6. Assumptions
- Input CSV files follow standard formatting
- Users provide valid input commands
- The system runs in a local environment