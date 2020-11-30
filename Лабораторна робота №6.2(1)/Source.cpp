#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>
using namespace std;

int Max(int* a, const int size)
{
	int max = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}
int Min(int* a, const int size)
{
	int min = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] < min)
			min = a[i];
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
	cout << "Середнє арифметичне найбільшого та найменшого елементу =  " << (Max(a,n)+Min(a,n))/2 << endl;
}