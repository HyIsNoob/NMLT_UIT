#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void NhapMang(float[], int&);
void XuatMang(float[], int);
float LonNhat(float[], int);

void NhapMang(float a[], int& n)
{
	cout << "--------------------------------\n";
	cout << "Nhap n: ";
	cin >> n;
	cout << "--------------------------------\n\n";
	cout << "--------------------------------\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu " << i + 1 << " :";
		cin >> a[i];
	}
	cout << "--------------------------------\n";
}

void XuatMang(float a[], int n)
{
	cout << "--------------------------------\n";
	cout << "Mang ban vua nhap la: ";
	for (int i = 0; i < n; i++)
	{
		cout << " || " << a[i];
	}
}

float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

int main()
{
	float a[500];
	int n;
	NhapMang(a, n);
	cout << endl;
	XuatMang(a, n);
	cout << " ||\n";
	cout << "--------------------------------\n\n";
	cout << "--------------------------------\n";
	cout << "So lon nhat la: ";
	cout << LonNhat(a, n);
	cout << "\n--------------------------------\n";
	cout << endl;
	return 0;
}