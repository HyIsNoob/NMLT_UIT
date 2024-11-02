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
	cout << Xuly(x);
	return 0;
}

float Xuly(float& xx)
{
	float s = 1;
	float t = 1;
	int m = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t = t * xx;
		m = m  * i;
		e = t / m;
		s = s +   e;
		i = i + 1;
	}
	return s;
}