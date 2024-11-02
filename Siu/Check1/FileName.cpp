#include <iostream>
using namespace std;

int main()
{
	int a, b = 1;
	cout << "Nhap canh: ";
	cin >> a;
	int temp = a / 2;
	while (temp > 0)
	{
		for (int i = 0; i < temp; i++)
			cout << " ";
		for (int i = 0; i < b; i++)
			cout << "*";
		cout << endl;
		temp--;
		b = b + 2;
	}
	for (int i = 0; i <= a; i++)
		cout << "*";
	cout << endl;
}