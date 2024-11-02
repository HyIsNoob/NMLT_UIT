#include<cmath>
#include<iostream>
using namespace std;
void nhap(int& aa, int& bb);
int xuly(int,int);
int main()
{
	int a, b;
	nhap(a, b);
	cout <<"uoc chung lon nhat la "<< xuly(a, b);
	return 0;
}
void nhap(int& aa, int& bb)
{
	cout << "nhap a ";
	cin >> aa;
	cout << "nhap b ";
	cin >> bb;
}
int xuly(int aa, int bb)
{
	int m = abs(aa);
	int n = abs(bb);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	return m + n;
}

