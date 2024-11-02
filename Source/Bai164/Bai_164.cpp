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
	float s = 1;
	int i = 1;
	while (i <= nn)
	{
		s = (float)1/(s+1);
		i = i + 1;
	}
	return s;
}