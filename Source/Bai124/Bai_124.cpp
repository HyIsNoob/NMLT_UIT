#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int&);
void Xuly(int);

int main()
{
	int n;
	Nhap(n);
	Xuly(n);
	return 0;
}

void Nhap(int& nn)
{
	cout << "nhap n ";
	cin >> nn;
}

void Xuly(int nn)
{
	float at = 2;
	float bt = 1;
	float ahh, bhh;
	int i = 2;
	while (i <= nn)
	{
		ahh = pow(at, 2) + 2 * pow(bt, 2);
		bhh = 2 * at * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << ahh << endl;
	cout << bhh;
}

