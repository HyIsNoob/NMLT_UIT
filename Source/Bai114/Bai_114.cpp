#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int&);
int Xuly(int);

int main()
{
	int n;
	Nhap(n);
	cout << Xuly(n);
	return 0;
}

void Nhap(int& nn)
{
	cout << "nhap n ";
	cin >> nn;
}
int Xuly(int nn)
{
	int at = -2;
	int tt = 3;
	int pp = 7;
	int i = 2;
	int ahh;
	while (i <= nn)
	{
		tt = tt * 3;
		pp = pp * 7;
		ahh = 5 * at + 2 * tt - 6 * pp + 12;
		i++;
		at = ahh;
	}
	return ahh;
}