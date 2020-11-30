#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>
using namespace std;
int Max(int* a, const int size, int i, int max)
{
	if (a[i] > max)
		max = a[i];
	if (i < size - 1)
		return Max(a, size, i + 1, max);
	else
		return max;
}
int Min(int* a, const int size, int i, int min)
{
	if (a[i] < min)
		min = a[i];
	if (i < size - 1)
		return Min(a, size, i + 1, min);
	else
		return min;
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int main()
{
	SetConsoleOutputCP(1251);
	const int n = 10;
	int a[n] = { 22,42,37,62,10,-43,-11,39,53,-80 };
	Print(a, n);
	cout << "Середнє арифметичне найбільшого та найменшого елементу =  " <<
		(Max(a,n,0,0)+ Min(a, n, 0, 0))/2 << endl;
}