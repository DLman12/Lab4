#ifndef FUNC_H
#define FUNC_H

extern double x,result;
extern int n;
void f(const double *x, double *result);
void writeArray(int *arr, int n);
void readArray(int *arr, int n);
void sort(int *arr, int n);
void sortStackArray(int *arr, int n);

#endif