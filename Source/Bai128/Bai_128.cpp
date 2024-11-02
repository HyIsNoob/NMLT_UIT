#include<iostream>
#include<cmath>

using namespace std;
void Nhap(float&, float&);
void Xuly(float, float);

int main()
{
	float a, b;
	Nhap(a, b);
	Xuly(a, b);
	return 0;
}

void Nhap(float& aa, float& bb)
{
	cout << "nhap a ";
	cin >> aa;
	cout << "nhap b ";
	cin >> bb;
}

void Xuly(float aa, float bb)
{
	if (aa > bb)
	{
		float temp = aa;
		aa = bb;
		bb = temp;
	}
	cout << "sau khi sap xep " << aa << " " << bb;
}