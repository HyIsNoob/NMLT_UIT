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
	int at = 2;
	int i = 2;
	int ahh;
	while (i <= nn)
	{
		ahh = at + 2 * i + 1;
		i++;
		at = ahh;
	}
	return ahh;
}


