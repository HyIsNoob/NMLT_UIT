#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void mang1chieu(string, int[], int&);
void xuatMang(int[], int);

int main()
{
	int b[500];
	int k;
	mang1chieu("Tester03.inp", b, k);
	cout << "Mang 1 chieu la: ";
	xuatMang(b, k);
	cout << endl;
}

void mang1chieu(string filename, int b[], int& k)
{
	ifstream fi(filename);
	fi >> k;
	for (int i = 0; i < k - 1; i++)
	{
		fi >> b[i];
	}
}

void xuatMang(int b[], int k)
{
	for (int i = 0; i < k; i++)
	{
		cout << setw(5) << " || " << b[i];
	}
}
