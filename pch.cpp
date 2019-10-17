// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"
void inputArray(float A[], int &n)
{
	cout << "type the size of array" << endl;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cout << "Type data for A[" << i << "]: ";
		cin >> A[i];
	}
}


void outputArray(float A[], int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << " A[" << i << "]: "<<A[i] <<endl;
	}
}


float Min(float A[], int n)
{
	float min = A[0];
	for (int i = 0;i < n;i++)
	{
		if (A[i] < min)
		{
			min = A[i];
		}
		
	}
	return min;
}


void Swap(float &a, float &b)
{
	float tmp = a;
	a = b;
	b = tmp;
}


void selectionSort(float A[], int n)
{
	for (int i = 0;i < n-1;i++)
	{
		int min = i;
		for (int j = i+1;j < n;j++)
		{
			if (A[j] < A[min])
			{
				min = j;
			}
		}
		Swap(A[i], A[min]);
	}
}


void insertionSort(float A[], int n)
{
	int pos;
	float x;
	for (int i = 1; i < n;i++)
	{
		pos = i - 1;
		x = A[i];
		while (pos >= 0 && A[pos] > x)
		{
			A[pos + 1] = A[pos];
			pos--;
		}
		A[pos + 1] = x;
	}
}


void interchangeSort(float A[], int n)
{
	for (int i = 0;i < n-1;i++)
	{
		for (int j = i + 1;j < n;j++)
		{
			if (A[j] < A[i])
				{
					Swap(A[j], A[i]);
				}
		}
	}
}


void bubleSort(float A[], int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = 0;j < n-i-1;j++)
		{
			if (A[j+1] <A[j])
			{
				Swap(A[j], A[j + 1]);
			}
		}
	}
}


void shakerSort(float A[], int n)
{
	int left = 0;
	int right = n-1 ;
	int k = 0;
	while (left < right)
	{
		for (int i = left;i < right;i++)
		{
			if (A[i + 1] < A[i])
			{
				Swap(A[i], A[i + 1]);
				k = i;
			}
		}
		right = k;
		for (int i = right; i > left;i--)
		{
			if (A[i - 1] > A[i])
			{
				Swap(A[i - 1], A[i]);
				k = i;
			}
		}
		left = k;
	}
}


void heapify(float A[], int n, int i)
{
	int largest = i; // day duoc xem la nut goc
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < n && A[left] > A[largest])
	{
		largest = left;
	}
	if (right < n && A[right] > A[largest])
	{
		largest = right;
	}
	if (largest != i)
	{
		Swap(A[i], A[largest]);
		heapify(A, n, largest);
	}
}


void heapSort(float A[], int n)
{
	for (int i = n / 2-1;i >= 0;i--)
	{
		heapify(A, n, i);
	}
	for (int i = n - 1;i >= 0;i--)
	{
		Swap(A[i], A[0]);
		heapify(A, i, 0);
	}
}


void shellSort(float A[], int n)
{
	int h=1;
	int i = 0, j = 0;
	float x = 0;
	while (h <= n / 3)
	{
		h = h * 3 + 1;
	}
	while (h > 0)
	{
		for (i = h;i < n;i++)
		{
			x = A[i];
			j = i;
			while (A[j - h] > x && j>h-1)
			{
				A[j] = A[j - h];
				j -= h;
			}
			A[j] = x;
		}
		h = (h - 1) / 3;
	}
	
}


void quickSort(float A[], int left, int right)
{
	float x = A[left];
	int i = left+1;
	int j = right;
	while (i<=j)
	{
		while (A[i] < x) i++;
		while (A[j] > x) j--;
	}
	if (i < j)
	{
		Swap(A[i], A[j]);
		i++; j--;
	}
	Swap(x, A[j]);
	quickSort(A, left, j-1);
	quickSort(A, i, right);
	
}
// In general, ignore this file, but keep it around if you are using pre-compiled headers.
