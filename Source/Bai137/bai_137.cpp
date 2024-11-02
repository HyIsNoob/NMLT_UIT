#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void NhapMatrix(float[][500], int&, int&);
void XuatMatrix(float[][500], int, int);
void BienTang(float[][500], int, int);
bool ktNguyenTo(int);
void HoanVi(float&, float&);

int main()
{
	float a[500][500];
	int i, j;
	NhapMatrix(a, i, j);
	BienTang(a, i, j);
	cout << "\n--------------------------------\n";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	return 0;
}

void BienTang(float a[][500], int m, int n)
{
	float b[500];
	int k;
	int i, j;

	k = 0;
	for (j = 0; j <= n - 2; j++)
		b[k++] = a[0][j];
	for (i = 0; i <= m - 2; i++)
		b[k++] = a[i][n - 1];
	for (j = n - 1; j >= 1; j--)
		b[k++] = a[m - 1][j];
	for (i = m - 1; i >= 1; i--)
		b[k++] = a[i][0];
	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] > b[j])
				HoanVi(b[i], b[j]);
	k = 0;
	for (j = 0; j <= n - 2; j++)
		a[0][j] = b[k++];
	for (i = 0; i <= m - 2; i++)
		a[i][n - 1] = b[k++];
	for (j = n - 1; j >= 1; j--)
		a[m - 1][j] = b[k++];
	for (i = m - 1; i >= 1; i--)
		a[i][0] = b[k++];
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
