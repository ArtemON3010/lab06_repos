#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>
using namespace std;
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] % 2 == 0) 
			S += a[i];
	return S;
}

int main()
{
	SetConsoleOutputCP(1251);
	const int n = 10;
	int a[n] = { 22,42,37,62,10,-43,-11,39,53,-80 };
	Print(a, n);
	int k = Sum(a, n);
	cout << "—ума чисел, що задов≥льн€ють умову =  " << k << endl;
}