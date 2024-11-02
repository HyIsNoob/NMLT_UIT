#include<cmath>
#include<iostream>
using namespace std;
void Nhap(float&, float&, float&);
void xuly(float, float, float);
int main()
{
	float a, b, c;
	Nhap(a, b, c);
	xuly(a, b, c);
	return 0;
}
void Nhap(float& aa, float& bb, float& cc)
{
	cout << "nhap a ";
	cin >> aa;
	cout << "nhap b ";
	cin >> bb;
	cout << "nhap c ";
	cin >> cc;
}
void xuly(float aa, float bb, float cc)
{
	float d = pow(bb, 2) - 4 * aa * cc;
	if (d <= 0)
	{
		if (d == 0)
			cout<< (-bb) / (2 * aa);
		else
			cout << "vo nghiem ";
	}
	else
	{
		cout << "x1= " << (-bb + sqrt(d)) / (2 * aa) << endl;
		cout << "x2= " << (-bb - sqrt(d)) / (2 * aa) << endl;
	}
}