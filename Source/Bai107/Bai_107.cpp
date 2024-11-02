#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
using namespace std;
float Xuly(float&);
int main()
{
	float x;
	cout << "nhap x ";
	cin >> x;
	cout << "cos(" << x << ")" << "=" << Xuly(x);
	return 0;
}
float Xuly(float& xx)
{
	xx = (xx * (M_PI)) / 180;
	float s = 1;
	float t = 1;
	int m = 1;
	int dau = -1;
	float e = 1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = t / m;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	return s;
}