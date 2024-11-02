#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int&);
float Xuly(int);

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

float Xuly(int nn)
{
	float at = 1;
	float att = 1;
	float ahh;
	int i = 2;
	while (i <= nn)
	{
		ahh = at + att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}


