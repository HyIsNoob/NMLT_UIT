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
	cout << "sin(" << x << ")" << "=" << Xuly(x);
	return 0;
}
float Xuly(float& xx)
{
	xx = (xx * (M_PI)) / 180;
	float s = xx;
	float t = xx;
	int m = 1;
	int dau = -1;
	float e = xx;
	int i = 3;
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