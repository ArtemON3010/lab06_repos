#include <iostream> 
#include <iomanip>
#include <Windows.h>
using namespace std;

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int Sum1(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] % 2 == 0)
			S += a[i];
	return S;
}
template <typename T1,typename T2>
T2 Sum2(T1 a, T2 size)
{
	T2 S = 0;
	for (T2 i = 0; i < size; i++)
		if (a[i] % 2 == 0)
			S += a[i];
	return S;
}

int main()
{
	SetConsoleOutputCP(1251);
	const int n = 8;
	int a[n] = { 37,40,54,61,5,-41,-14,31 };
	Print(a, n);
	cout << "—ума чисел, що задов≥льн€ють умову(звичайна функц≥€) =  "<< Sum1(a, n) << endl;
	cout << "—ума чисел, що задов≥льн€ють умову(шаблонна функц≥€) =  "<< Sum2(a, n) << endl;
}
