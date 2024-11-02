#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int&, int&);
int Xuly(int, int);

int main()
{
	int a, b;
	Nhap(a, b);
	cout << Xuly(a, b);
	return 0;
}

void Nhap(int& aa, int& bb)
{
	cout << "nhap a ";
	cin >> aa;
	cout << "nhap b ";
	cin >> bb;
}

int Xuly(int aa, int bb)
{
	int lc = aa;
	if (lc < bb)
		lc = bb;
	cout << "so lon nhat la ";
	return lc;
}