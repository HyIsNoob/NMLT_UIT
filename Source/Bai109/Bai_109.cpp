#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>

using namespace std;
float Xuly();

int main()
{
	cout << Xuly();
	return 0;
}

float Xuly()
{
	float s = 1;
	int m = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		m = m * i;
		e = (float)1 / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}