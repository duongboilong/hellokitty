// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef PCH_H
#define PCH_H
#include <iostream>
using namespace std;
void inputArray(float A[], int &n);
void outputArray(float A[], int n);
float Min(float A[], int n);
void Swap(float &a, float &b);
void selectionSort(float A[], int n);
void insertionSort(float a[], int n);
void interchangeSort(float A[], int n);
void bubleSort(float A[], int n);
void shakerSort(float A[], int n);
void heapify(float A[], int n, int i);
void heapSort(float A[], int n);
void shellSort(float A[], int n);
void quickSort(float A[], int left, int right);
// TODO: add headers that you want to pre-compile here

#endif //PCH_H
