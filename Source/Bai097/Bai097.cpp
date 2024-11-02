#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&, float&);
float XuLy(float, float);
void Xuat(float, float);

int main()
{
	float n, x;
	Nhap(n, x);
	Xuat(n, x);
	cout << "\n\nS la ";
	cout << XuLy(n, x);
	return 0;
}

void Nhap(float& nn, float& xx)
{
	cout << "Nhap so: ";
	cin >> xx;
	cout << "Nhap so mu: ";
	cin >> nn;
}

void Xuat(float nn, float xx)
{
	cout << "\nSo ban vua nhap la: " << xx;
	cout << "\nSo mu vua nhap la: " << nn;
}

float XuLy(float nn, float xx)
{
	int i = 1;
	float t = 1;
	float S = 0;
	while (i <= nn)
	{
		t = t * xx;
		S = sqrt(t + S);
		i = i + 1;
	}
	return t;
}