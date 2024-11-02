#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void NhapMatrix(float[][500], int&, int&);
void XuatMatrix(float[][500], int, int);
void DuongBienTang(float[][500], int, int);
bool ktNguyenTo(int);
void HoanVi(float&, float&);

int main()
{
	float a[500][500];
	int i, j;
	NhapMatrix(a, i, j);
	cout << "\n--------------------------------\n";
	cout << "Chua sap xep ";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	DuongBienTang(a, i, j);
	cout << "\n--------------------------------\n";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	return 0;
}

void DuongBienTang(float a[][500], int m, int n)
{
	float b[500];
	int k;
	int i, j;

	k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			b[k++] = a[i][j];
	for (i = 0; i <= k - 1; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] > b[j])
				HoanVi(b[i], b[j]);
	k = 0;
	for (int u = 1; u < min(m, n); u++)
	{
		for (j = u - 1; j <= n - u; j++)
			a[u - 1][j] = b[k++];
		for (i = u; i <= m - u; i++)
			a[i][n - u] = b[k++];
		for (j = n - u - 1; j >= u - 1; j--)
			a[m - u][j] = b[k++];
		for (i = m - u - 1; i >= u; i--)
			a[i][u - 1] = b[k++];
	}
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

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	else
		return false;
}

void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
