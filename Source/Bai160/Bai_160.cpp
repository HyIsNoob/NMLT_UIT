#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int&);
int Xuly(int);
int main()
{
	int n;
	Nhap(n);
	cout << "so dau tien xuat hien " << Xuly(n)<<" lan";
	return 0;
}

void Nhap(int& nn)
{
	cout << "nhap n ";
	cin >> nn;
}

int Xuly(int nn)
{
	int dt = nn;
	while (dt > 10)
		dt = dt / 10;
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv == dt)
			dem++;
		t = t / 10;
	}
	return dem;
}

