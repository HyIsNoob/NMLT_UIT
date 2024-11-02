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
	int s = 0;
	int k = 0;
	while (s + k + 1 < nn)
	{
		k++;
		s = s + k;
	}
	return k;
}