#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void mang1chieu(int[], int&);
void xuatMang(int[], int);
int timChan(int[], int);
int firstChan(int[], int);

int main()
{
	int b[500];
	int k;
	mang1chieu(b, k);
	cout << "Mang 1 chieu la: \n";
	xuatMang(b, k);
	cout << endl;
	cout << "So chan be nhat la: ";
	cout << timChan(b, k);
	cout << endl;
	cout << endl;
}

void mang1chieu(int b[], int& k)
{
	cout << "Nhap n: ";
	cin >> k;
	srand(time(NULL));
	for (int i = 0; i < k; i++)
	{
		b[i] = 1 + (rand() / (RAND_MAX / 100));
	}
}

int firstChan(int b[], int k)
{
	for (int i = 0; i < k; i++)
	{
		if (b[i] % 2 == 0)
			return b[i];
	}
	return -1;
}


int timChan(int b[], int a)
{
	int lc = firstChan(b, a);
	for (int i = 0; i < a; i++)
	{
		if (lc == -1)
		{
			return -1;
		}
		for (int i = 0; i < a; i++)
		{
			if (b[i] % 2 == 0 && b[i] < lc)
			{
				lc = b[i];
			}
		}
	}
	return lc;
}

void xuatMang(int b[], int k)
{
	for (int i = 0; i < k; i++)
	{
		cout << setw(5) << " || " << b[i] << endl;
	}
}