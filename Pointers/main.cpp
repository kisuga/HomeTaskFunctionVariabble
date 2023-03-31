#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

//#define POINTERS_BASICS

void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef POINTERS_BASICS
		int a = 2;
	int* pa = &a;// объявление "ра" и инициализация его адресом пременной "а"
	cout << a << endl; // вывод значения перменной а
	cout <<&a << endl;// взятие адреса перменной "а" прямо при выводе
	cout << pa << endl;// вывод адресы перменной "а", храниящегося  в указателе ра
	cout << *pa << endl;// разъименование указателя "ра" и получение значения 

	int* pb;
	int b = 3;
	//*pb = &b; //так неправильно - здесь мы в значении по адресу пытаемся записать адрес
	pb = &b;// правильно  писать так
	cout << *pb << endl;
#endif POINTERS_BASICS


	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr + i << tab;
	}
	cout << endl;

}