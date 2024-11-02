#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int&,int&);
void Xuly(int,int);

int main()
{
	int a, b;
	Nhap(a, b);
	Xuly(a, b);
	return 0;
}

void Nhap(int& aa, int& bb)
{
	cout << "nhap a ";
	cin >> aa;
	cout << "nhap b ";
	cin >> bb;
}
void Xuly(int aa, int bb)
{
	if (aa < 0)
		aa = -aa;
	if (bb < 0)
		bb = -bb;
	cout << "sau bien doi \n" << aa << endl << bb;
}