#include<iostream>
using namespace std;
int main()
{
	/*Дано натуральное число N. Найти наибольшую и наименьшую
цифры числа.*/
	setlocale(LC_ALL, "Rus");
	cout << "Введите целое натуральное число: ";
	int N, min, max, a;
	
		
	cin >> N;
	
	
	min = 9;
	max = 0;
	while(N>0)
	{
		a=N % 10;
		if (a >= max) {
			max = a;
		}
		if (a <= min) {
			min = a;
		}
		
			

		
		N = N / 10;
		
	}
	cout << "max= " << max << endl;
	
	cout << "min= " << min << endl;
}
