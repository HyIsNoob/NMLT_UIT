#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void NhapMatrix(float[][500], int&, int&);
void XuatMatrix(float[][500], int, int);
void TichCot(float[][500], int, int, int, int);

int main()
{
	float a[500][500];
	int i, j;
	int x, y;
	cout << "Nhap khoang x: "; cin >> x;
	cout << "Nhap khoang y: "; cin >> y;
	NhapMatrix(a, i, j);
	cout << "\n--------------------------------\n";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	cout << "\n--------------------------------\n";
	TichCot(a, i, j, x, y);
	cout << "\n--------------------------------\n";
	return 0;
}

void TichCot(float a[][500], int m, int n, int xx, int yy)
{
	int check;
	cout << "Nhap dong ban muon tinh: ";
	cin >> check;
	float S = 1;
	int i, j;
	for (j = 0; j < n; j++)
		if (a[j][check - 1] > xx && a[j][check - 1] < yy)
			S = S * a[j][check - 1];
	cout << "Tich cac so trong doan tren cot la: " << S;
}

void NhapMatrix(float a[][500], int& ii, int& jj)
{
	cout << "--------------------------------\n";
	cout << "Nhap so dong: ";
	cin >> ii;
	cout << "--------------------------------\n";
	cout << "Nhap so cot: ";
	cin >> jj;
	cout << "--------------------------------\n\n";
	cout << "--------------------------------\n";
	for (int i = 0; i < ii; i++)
	{
		cout << "Dong " << i + 1 << " : " << endl;
		for (int j = 0; j < jj; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "--------------------------------\n";
}

void XuatMatrix(float a[][500], int ii, int jj)
{
	cout << "Ma tran la: " << endl;
	for (int i = 0; i < ii; i++)
	{
		for (int j = 0; j < jj; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}
