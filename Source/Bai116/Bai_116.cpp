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
	int att = 1;
	int ahh;
	int i = 2;
	while (i <= nn)
	{
		ahh = 4 * at + att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}


