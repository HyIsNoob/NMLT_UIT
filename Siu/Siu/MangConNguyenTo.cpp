#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void MangCon(int[][100], int, int);
bool ktNguyenTo(int);
bool ktNguyenToMang(int[][100], int, int, int, int);
void XuatMangCon(int[][100], int, int, int, int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	MangCon(a, m, n);
}

bool ktNguyenToMang(int a[100][100], int m, int n, int di, int dj)
{
	int flag = 0;
	for (int i = m; i < m + di; i++)
		for (int j = n; j < n + dj; j++)
			if (ktNguyenTo(a[i][j]))
				flag = 1;
	if (flag == 1)
		return true;
	else
		return false;
}

bool ktNguyenTo(int a)
{
	int dem = 0;
	for (int i = 1; i <= a; i++)
		if (a % i == 0)
			dem++;
	if (dem == 2)
		return true;
	else
		return false;
}

void MangCon(int a[100][100], int m, int n)
{
	cout << "\nMang con la: \n";
	int d = 2, c = 3;
	for (int di = 0; di <= m - d; di++)
	{
		for (int dj = 0; dj <= n - c; dj++)
			if (ktNguyenToMang(a, di, dj, d, c))
				XuatMangCon(a, di, dj, d, c);
		cout << endl;
	}
}

void XuatMangCon(int a[100][100], int m, int n, int di, int dj)
{
	for (int i = m; i < m + di; i++)
	{
		for (int j = n; j < n + dj; j++)
			cout << setw(5) << a[i][j];
		cout << endl;
	}
}

void Nhap(int a[100][100], int& m, int& n)
{
	cout << "Nhap dong: "; cin >> m;
	cout << "Nhap cot: "; cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap phan tu a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

void Xuat(int a[100][100], int m, int n)
{
	cout << "\nMang la: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(5) << a[i][j];
		cout << endl;
	}
}