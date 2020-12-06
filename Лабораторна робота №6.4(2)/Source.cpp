#include <iostream> 
#include <iomanip>
#include <Windows.h>
using namespace std;
void Create(int* arr, const int n, int i)
{
	cout << "a[" << i << "] = ";
	cin >> arr[i];
	if (i < n - 1)
		Create(arr, n, i + 1);
	else
		cout << endl;
}
int Max(int* arr, const int n, int i, int max)
{
	if (arr[i] > max)
		max = arr[i];
	if (i < n - 1)
		return Max(arr, n, i + 1, max);
	else
		return max;
}
int Pos(int* arr, const int n,int i, int lastpos)
{
	int pos = arr[0];
	if(i<n)
	{
		if (arr[i] > 0)
		{
			pos = arr[i];
			lastpos = i + 1; // оскільки числення йде від 0 то щоб знати позицію треба додати ще 1
		}
	}
	if (i < n - 1)
		return Pos(arr, n, i + 1, lastpos);
	else
	return lastpos;
}
int Sum(int* arr, const int n,int S,int i)
{
	if (i < Pos(arr, n,0,0) - 1)
		S += arr[i];
	if (i < Pos(arr, n, 0, 0) - 1)
		return Sum(arr, n, S, i + 1);
	else
	return S;
}
void Replacing(int* arr, const int n, int a, int b,int i,int k)
{
	if (i < n) 
		if ((arr[i] > a) && (arr[i] < b))
			cout << arr[i] << " ";
		else
			arr[i] = 0;
	if (i < n - 1)
		return Replacing(arr, n, a, b, i + 1,k);
	if (k < n)
		if (arr[k] == 0)
			cout << arr[k] << " ";
		else
			cout << "";
	if (k < n - 1)
		return Replacing(arr, n, a, b, i,k + 1);
}
int main()
{
	SetConsoleOutputCP(1251);
	int n = 0;

	cout << "Введіть кількість елементів масиву:  ";
	cin >> n;
	int* arr = new int[n];
	Create(arr, n,0);
	cout << "arr = { ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "}"; cout << " - Ось наш масив" << endl;
	cout << "Максимальний елемент масиву = " << Max(arr, n,0,0) << endl;
	cout << "Позиція останнього додатного елементу масиву = " << Pos(arr, n,0,0) << endl;
	cout << "Сума елементів, що задовільняють умові = " << Sum(arr, n,0,0) << endl;
	int a = 0; int b = 0;
	cout << "Введіть a - ";
	cin >> a;
	cout << "Введіть b - ";
	cin >> b;
	cout << "a = { ";
	Replacing(arr, n, a, b,0,0);
	cout << "}"; cout << " - Ось наш новий стиснутий масив із нулями на кінці" << endl;



}