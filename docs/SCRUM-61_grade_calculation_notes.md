# SCRUM-61 Grade Calculation Notes

## Project

Project B: Student Grade Calculator

## Purpose

This story focuses on calculating the student's final grade result. The system should use the entered scores to calculate the weighted final score and convert it into a letter grade.

## Grade Calculation Formula

Final Score = Assignment × 0.30 + Midterm × 0.20 + Final Exam × 0.30 + Project × 0.20

## Calculation Rules

- Assignment score has a weight of 30%.
- Midterm exam score has a weight of 20%.
- Final exam score has a weight of 30%.
- Project score has a weight of 20%.
- The final score should be rounded to one decimal place.
- The letter grade should be assigned based on the final score.

## Letter Grade Rules

| Final Score | Letter Grade |
|---|---|
| 90.0 - 100.0 | A |
| 80.0 - 89.9 | B |
| 70.0 - 79.9 | C |
| 60.0 - 69.9 | D |
| Below 60.0 | F |

## Example

Input:

- Assignment: 82
- Midterm: 78
- Final Exam: 85
- Project: 88

Calculation:

Final Score = 82 × 0.30 + 78 × 0.20 + 85 × 0.30 + 88 × 0.20  
Final Score = 83.3

Output:

- Final Score: 83.3
- Letter Grade: B