#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
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
		if ((a[i] % 2 == 0) && (a[i] > 0))
			S += a[i];
	return S;
}
int Count(int* a, const int size)
{
	int k = 0;
	for (int i = 0; i < size; i++)
		if ((a[i] % 2 == 0) && (a[i] > 0))
			k += 1;
	return k;
}
void Replacing(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		if ((a[i] % 2 == 0) && (a[i] > 0))
			cout << setw(4) << a[i];
		else
			cout << setw(4) << 0;


}

int main()
{
	SetConsoleOutputCP(1251);
	srand((unsigned)time(NULL)); // ≥н≥ц≥ал≥зац≥€ генератора випадкових чисел
	const int t = 25;
	int a[t];
	int Low = -5;
	int High = 12;
	Create(a, t, Low, High);
	Print(a, t);
	int k = Sum(a, t);
	cout << "—ума чисел, що задов≥льн€ють умову =  " << k << endl;
	int p = Count(a, t);
	cout << " ≥льк≥сть чисел, що задов≥льн€ють умову =  " << p << endl;
	Replacing(a, t);

}