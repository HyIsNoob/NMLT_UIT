#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void mang1chieu(int[], int&);
void xuatMang(int[], int);

int main()
{
	int b[500];
	int k;
	mang1chieu(b, k);
	cout << "Mang 1 chieu la: ";
	xuatMang(b, k);
	cout << endl;
}

void mang1chieu(int b[], int& k)
{
	cout << "Nhap n: ";
	cin >> k;
	srand(time(NULL));
	for (int i = 0; i < k; i++)
	{
		b[i] = rand() % (200 + 1) - 100;
	}
}

void xuatMang(int b[], int k)
{
	for (int i = 0; i < k; i++)
	{
		cout << setw(5) << " || " << b[i];
	}
}
