#include <iostream>
#include <cmath>
using namespace std;

void Nhap(int&, float&);
float XuLy(int, float);
void Xuat(int, float);

int main()
{
	int n;
	float x;
	Nhap(n, x);
	Xuat(n, x);
	cout << "\n\nS la ";
	cout << XuLy(n, x);
	return 0;
}

void Nhap(int& nn, float& xx)
{
	cout << "Nhap so mu: ";
	cin >> xx;
	cout << "Nhap so n: ";
	cin >> nn;
}

void Xuat(int nn, float xx)
{
	cout << "\nSo ban mu vua nhap la: " << xx;
	cout << "\nSo ban n vua nhap la: " << nn;
}

float XuLy(int nn, float xx)
{
	int i = 0;
	float S = 0;
	float m = 1;
	while (i <= nn)
	{
		m = m * (xx + i);
		S = S + (float)i / m;
		i++;
	}
	return S;
}
