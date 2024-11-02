#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void mang1chieu(float[], int&);
void xuatMang(float[], int);

int main()
{
	float b[500];
	int k;
	mang1chieu(b, k);
	cout << "Mang 1 chieu la: ";
	xuatMang(b, k);
	cout << endl;
}

void mang1chieu(float b[], int& k)
{
	cout << "Nhap n: ";
	cin >> k;
	srand(time(NULL));
	for (int i = 0; i < k; i++)
	{
		b[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
	}
}

void xuatMang(float b[], int k)
{
	for (int i = 0; i < k; i++)
	{
		cout << setw(5) << " || " << b[i];
	}
}
