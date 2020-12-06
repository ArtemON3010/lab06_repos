#include <iostream> 
#include <iomanip>
#include <Windows.h>
using namespace std;
void Create(int*& arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	cout << endl;
}
int Max(int*& arr, const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}
int Pos(int*& arr, const int n)
{
	int pos = arr[0];
	int lastpos;
	for (int i = 0; i < n ; i++)
	{
		if (arr[i] > 0)
		{
			pos = arr[i];
			lastpos = i + 1; // оскільки числення йде від 0 то щоб знати позицію треба додати ще 1
		}
	}
	return lastpos;
}
int Sum(int*& arr, const int n)
{
	int S = 0;
	for (int i = 0; i < Pos(arr, n) - 1; i++)
			S += arr[i];
	return S;
}
void Replacing(int* arr, const int size,int a,int b)
{
	for (int i = 0; i < size; i++)
		if ((arr[i] > a) && (arr[i] < b))
			cout << arr[i] << " ";
		else
			arr[i] = 0;
	for (int i = 0; i < size; i++)
		if (arr[i] == 0)
			cout << arr[i] << " ";
		else
			cout << "";
}
int main()
{
	SetConsoleOutputCP(1251);
	int n = 0;

	cout << "Введіть кількість елементів масиву:  ";
	cin >> n;
	int* arr = new int[n];
	Create(arr, n);
	cout << "arr = { ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "}"; cout << " - Ось наш масив" << endl;
	cout << "Максимальний елемент масиву = " << Max(arr, n) << endl;
	cout << "Позиція останнього додатного елементу масиву = " << Pos(arr, n) << endl;
	cout << "Сума елементів, що задовільняють умові = " << Sum(arr, n) << endl;
	int a = 0; int b = 0;
	cout << "Введіть a - ";
	cin >> a;
	cout << "Введіть b - ";
	cin >> b;
	cout << "a = { ";
	Replacing(arr, n,a,b);
	cout << "}"; cout << " - Ось наш новий стиснутий масив із нулями на кінці" << endl;



}