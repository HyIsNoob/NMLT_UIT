#include<iostream>
#include<cmath>

using namespace std;
void Nhap(float&, float&);
float Xuly(float, float);

int main()
{
	float a, b;
	Nhap(a, b);
	cout << Xuly(a, b);
	return 0;
}

void Nhap(float& aa, float& bb)
{
	cout << "nhap a ";
	cin >> aa;
	cout << "nhap b ";
	cin >> bb;
}

float Xuly(float aa, float bb)
{
	float lc = aa;
	if (lc < bb)
		lc = bb;
	cout << "so lon nhat la ";
	return lc;
}