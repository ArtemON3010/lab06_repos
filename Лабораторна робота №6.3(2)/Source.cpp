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

int Sum1(int* a, const int size, int i, int S)
{
	if (a[i] % 2 == 0)
		S += a[i];
	if (i < size - 1)
		return Sum1(a, size, i + 1, S);
	else
		return S;
}
template <typename T1, typename T2>
T2 Sum2(T1 a, T2 size,T2 i,T2 S)
{
	if (a[i] % 2 == 0)
		S += a[i];
	if (i < size - 1)
		return Sum2(a, size, i + 1, S);
	else
		return S;
}


int main()
{
	SetConsoleOutputCP(1251);
	const int n = 9;
	int a[n] = { 34,12,87,-3,43,1,44,22,10 };
	Print(a, n);
	cout << "—ума чисел, що задов≥льн€ють умову(звичайна функц≥€) =  " << Sum1(a, n,0,0) << endl;
	cout << "—ума чисел, що задов≥льн€ють умову(шаблонна функц≥€) =  " << Sum2(a, n,0,0) << endl;
}