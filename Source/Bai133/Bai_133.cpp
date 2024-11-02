#include<iostream>
#include<cmath>
using namespace std;

void NhapMatrix(int[][500], int&, int&);
void XuatMatrix(int[][500], int, int);
void ChanTang(int[][500], int, int);
void LeGiam(int[][500], int, int);
void ChanTangLeGiam(int[][500], int, int);
void HoanVi(int&, int&);

int main()
{
	int a[500][500];
	int i, j;
	NhapMatrix(a, i, j);
	ChanTangLeGiam(a, i, j);
	cout << "\n--------------------------------\n";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	return 0;
}

void ChanTang(int a[][500], int m, int n)
{
	int b[500];
	int k;
	int i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				b[k++] = a[i][j];
	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] > b[j])
				HoanVi(b[i], b[j]);
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				a[i][j] = b[k++];
}
void LeGiam(int a[][500], int m, int n)
{
	int b[500];
	int k;
	int i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 != 0)
				b[k++] = a[i][j];
	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] > b[j])
				HoanVi(b[i], b[j]);

	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 != 0)
				a[i][j] = b[k++];
}
void ChanTangLeGiam(int a[][500], int m, int n)
{
	ChanTang(a, m, n);
	LeGiam(a, m, n);
}

void NhapMatrix(int a[][500], int& ii, int& jj)
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

void XuatMatrix(int a[][500], int ii, int jj)
{
	cout << "Ma tran la: " << endl;
	for (int i = 0; i < ii; i++)
	{
		for (int j = 0; j < jj; j++)
			cout << " || " << a[i][j];
		cout << " || " << endl;
	}
}

void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

