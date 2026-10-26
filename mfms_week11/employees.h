#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#include "records.h"

void addEmployee(Employee employees[], int *count);
void displayEmployees(const Employee employees[], int count);
void updateSalary(Employee *e, double newSalary);
void saveEmployees(const Employee employees[], int count, const char *filename);
void loadEmployees(Employee employees[], int *count, const char *filename);
Employee *findEmployee(Employee list[], int n, int id);

#endif