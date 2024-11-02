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
	int t = 1;
	int k = 0;
	while (t * 2 <= nn)
	{
		t = t * 2;
		k++;
	}
	return k;
}