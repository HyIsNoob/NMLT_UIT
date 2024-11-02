#include<cmath>
#include<iostream>
using namespace std;
void Nhap(int&, int&);
void xuly(int, int);
int main()
{
	int x, y;
	Nhap(x, y);
	xuly(x, y);
	return 0;
}
void Nhap(int& xx, int& yy)
{
	cout << "nhap nam x ";
	cin >> xx;
	cout << "nhap nam y ";
	cin >> yy;
}
void xuly(int xx, int yy)
{
	int n;
	n = xx;
	while (n <= yy)
	{
		bool dk1 = ((n % 4) == 0 && (n % 100 != 0));
		bool dk2 = (n % 400 == 0);
		if (dk1 || dk2)
			cout << "\n nam nhuan " << n;
		n = n + 1;
	}
}

