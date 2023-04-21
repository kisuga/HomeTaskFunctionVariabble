#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

int* pushBack(int arr[], int& n, int value);
int* pushFront(int arr[], int& n, int value);
int* popBack(int arr[], int& n);
int* popFront(int arr[], int& n);
//int* insert(int arr[]), int& n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];

	FillRand(arr, n);
	Print(arr, n);

	int value;
	cout << "Введите значение с клавиатуры:"; cin >> value;

	arr = pushBack(arr, n, value);
	Print(arr, n);
	arr = pushFront(arr, n, value);
	Print(arr, n);
	arr = popBack(arr, n);
	Print(arr, n);
	arr = popFront(arr, n);
	Print(arr, n);
	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Обращение к элементам массива через оператор индексирования:
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Обращение к элементам массива через Арифметику указателей и оператор разыменования
		cout << *(arr + i) << "\t";
	}
	cout << endl;
}

int* pushBack(int arr[], int& n, int value)

{
	int* buffer = new int[n + 1];

	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}

	delete[] arr;

	arr = buffer;

	arr[n] = value;
	n++;

	return arr;

}
int* pushFront(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[]arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return buffer;
}
int* popBack(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;

	return buffer;
}

int* popFront(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i + 1];
	delete[] arr;

	return buffer;
}

//int* insert(int arr[]), int& n)
//{
	
	//int* buffer = new int[n + 1];
	//for (int i = 0; i < 0;i++)
	//{

	//}
//}