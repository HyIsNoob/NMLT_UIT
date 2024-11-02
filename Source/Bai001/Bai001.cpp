#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&, float&);
float XuLy(float, float, float, float);
void Xuat(float, float, float, float);

int main()
{
	float x1, y1, x2, y2;
	Nhap(x1, y1);
	Nhap(x2, y2);
	Xuat(x1, y1, x2, y2);
	cout << "\n\nDien Tich: ";
	cout << XuLy(x1, y1, x2, y2);
	return 0;
}

void Nhap(float& x1, float& y1)
{
	cout << "Nhap toa do x1: ";
	cin >> x1;
	cout << "Nhap toa do y1: ";
	cin >> y1;
}

void Xuat(float x1, float y1, float x2, float y2)
{
	cout << endl;
	cout << "Nhap toa do x1 la: " << x1 << endl;
	cout << "Nhap toa do y1 la: " << y1 << endl;
	cout << "Nhap toa do x2 la: " << x2 << endl;
	cout << "Nhap toa do y2 la: " << y2 << endl;
}

float XuLy(float x1, float y1, float x2, float y2)
{
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}