#include <iostream>
using namespace std;

void Nhap(int&, int []);
int ktDiemBinh(int, int[], int[]);

int main()
{
	int a[500], b[500], n;
	Nhap(n, a);
	cout << ktDiemBinh(n, a, b);
}

int ktDiemBinh(int n, int a[500], int b[500])
{
	int S = 0;
	for (int i = 0; i < n - 1; i++)
		b[i] = a[i + 1];
	for (int i = 0; i < n - 1; i++)
		if (b[i] == a[i])
			S++;
	return S;
}

void Nhap(int& n, int a[500])
{
	cin >> n;
	char temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp == 'A')
			temp = 1;
		else if (temp == 'B')
			temp = 2;
		else if (temp == 'C')
			temp = 3;
		else if (temp == 'D')
			temp = 4;
		a[i] = temp;
	}
}