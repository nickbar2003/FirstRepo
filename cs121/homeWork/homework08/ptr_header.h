#ifndef __PTR_HEADER_H
#define __PTR_HEADER_H

#include <iostream>

int varA = 25;
int varB = 32;
std::string programName = "Pointers and Headers";
double daysInAYear = 365.25;
double monthlyRateIncrease_pct = 10.0;

const int studentCount = 9;

int studentAges_yrs[] = {9, 7, 5, 7, 8, 10, 6, 7, 9};
double monthlyBills_USD[] = {60.7, 45.9, 30.0, 63.8, 50.50,
                             15.2, 25.9, 81,   14.7};
std::string studentNames[] = {"Alice",   "Betty", "Carly",   "Denise",  "Elsa",
                              "Francis", "Gina",  "Harriet", "Isoldore"};

void swap(int *a, int *b);
int max(int *a, int *b);
double totalOfBills(double *, int billsQuantity);
void printStudentNames(std::string *names, int namesCount);
void printOutStudentSummary(std::string *names, int *ages, double *monthlyBills,
                            int numStudents);
void raiseBills(double *bills, int billsCount, double billIncreasePct);

#endif