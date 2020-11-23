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
int Sum(int* a, const int size, int i)
{
	if (i < size)
	{
		if ((a[i] % 2 == 0) && (a[i] > 0))
			return a[i] + Sum(a, size, i + 1);
		else
			return Sum(a, size, i + 1);
	}
	else
		return 0;
}
int Count(int* a, const int size, int i, int k)
{
	if ((a[i] % 2 == 0) && (a[i] > 0))
		k += 1;
	if (i < size - 1)
		return Count(a, size, i + 1, k);
	else
		return k;
}
void Replacing(int* a, const int size, int i, int k)
{
	if ((a[i] % 2 == 0) && (a[i] > 0))
		cout << setw(4) << a[i];
	else
		cout << setw(4) << 0;
	if (i < size - 1)
		return Replacing(a, size, i + 1, k);

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
	cout << "—ума чисел, що задов≥льн€ють умову =  " << Sum(a, t, 0) << endl;
	cout << " ≥льк≥сть чисел, що задов≥льн€ють умову =  " << Count(a, t, 0, 0) << endl;
	Replacing(a, t, 0, 0);

}