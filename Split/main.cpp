#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);

	//1) Вычисляем размер массивов (для этого вводим переменные):
	int even_count = 0;
	int odd_count = 0; 
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)even_count++; // если элемент массива делится на 2 без остатка, то срабатывает счетчик
		else odd_count++;// в ином срабатывает счетчик нечетных чисел
	}

	// 2) выделение памяти для четных и нечетных элементов:
	int* even_arr = new int[even_count];
	int* odd_arr = new int[odd_count];

	//3) копируем четные и нечетные элементы в соответствующие массивы
	for (int i = 0, j = 0, k = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)even_arr[j++] = arr[i];
		else odd_arr[k++] = arr[i];
		//(arr[i] % 2 == 0 ? even_arr[j++] : odd_arr[k++]) = arr[i]; - реализация той же функции с использованием тернарного оператора
	}

	//4) выводим результаты на экран
	Print(even_arr, even_count);
	Print(odd_arr, odd_count);
	
	//5) удаляем динамические массивы:
	delete[]  odd_arr;
	delete[] even_arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
