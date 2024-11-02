#include<iostream>
#include<cmath>
using namespace std;

void NhapMatrix(float[][500], int&, int&);
void XuatMatrix(float[][500], int, int);
void DuongTang(float[][500], int, int);
void HoanVi(float&, float&);

int main()
{
	float a[500][500];
	int i, j;
	NhapMatrix(a, i, j);
	DuongTang(a, i, j);
	cout << "\n--------------------------------\n";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	return 0;
}

void DuongTang(float a[][500], int m, int n)
{
	float b[500];
	int k;
	int i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] > 0)
				b[k++] = a[i][j];
	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] > b[j])
				HoanVi(b[i], b[j]);
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] > 0)
				a[i][j] = b[k++];
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
			cout << " || " << a[i][j];
		cout << " || " << endl;
	}
}

void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}

