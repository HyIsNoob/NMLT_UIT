#include <iostream>
using namespace std;
const int MAX = 50;

void NhapMang(int[], int&);
int IsDoiXung(int[], int);

int main()
{
	int a[500], n;
	NhapMang(a, n);
	cout << IsDoiXung(a, n);
}

int IsDoiXung(int a[500], int n)
{
	int temp[500];
	int flag = 1, khanh = (n/2)-1;
	if (n % 2 == 0)
	{
		for (int i = 0; i < (n / 2); i++)
			temp[i] = a[i];
		for (int i = (n / 2); i < n; i++)
			if (temp[khanh--] != a[i])
				flag = 0;
	}
	else
	{
		for (int i = 0; i < (n / 2); i++)
			temp[i] = a[i];
		for (int i = (n / 2)+1; i < n; i++)
			if (temp[khanh--] != a[i])
				flag = 0;
	}
	if (flag == 0)
		return 0;
	else
		return 1;
}

void NhapMang(int a[], int& n)
{
	do {
		cout << "Nhap so phan tu n= ";
		cin >> n;
	} while (n<1 || n>MAX);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
