# Municipal Financial Management System (MFMS) - Week 9 & 10

## Overview
This project is a modular C application for managing municipal records including employees, budgets, and reporting functions.

## Module Structure
- `main.c`: Controls the application menu and program flow.
- `employees.c` / `employees.h`: Handles employee record entry and display logic.
- `budget.c` / `budget.h`: Manages budget allocations and tracking.
- `utilities.c` / `utilities.h`: Contains helper functions for user input and validation.
- `reports.c` / `reports.h`: Generates combined summaries using employee and budget data.

## Build Commands
Compile each module into an object file and link them into an executable:

```bash
gcc -std=c99 -Wall -Wextra -pedantic -c main.c
gcc -std=c99 -Wall -Wextra -pedantic -c employees.c
gcc -std=c99 -Wall -Wextra -pedantic -c budget.c
gcc -std=c99 -Wall -Wextra -pedantic -c utilities.c
gcc -std=c99 -Wall -Wextra -pedantic -c reports.c
gcc main.o employees.o budget.o utilities.o reports.o -o mfms