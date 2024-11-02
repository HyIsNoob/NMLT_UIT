#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>

using namespace std;
float Xuly(float&);

int main()
{
	float n;
	cout << "nhap n ";
	cin >> n;
	cout << Xuly(n);
	return 0;
}

float Xuly(float& nn)
{
	float s = 0;
	int dau = 1;
	float e = 4;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / i;
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	return s;
}