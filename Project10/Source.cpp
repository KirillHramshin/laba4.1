#include<iostream>
using namespace std;
int main()
{
	/*���� ����������� ����� N. ����� ���������� � ����������
����� �����.*/
	setlocale(LC_ALL, "Rus");
	cout << "������� ����� ����������� �����: ";
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
