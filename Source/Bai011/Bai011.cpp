#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&, float&);
float XuLy(float, float, float, float);
float tinhS(float, float, float, float);
void Xuat(float, float);

int main()
{
    float x1, y1, x2, y2, x3, y3;
    Nhap(x1, y1);
    Nhap(x2, y2);
    Nhap(x3, y3);
    Xuat(x1, y1);
    Xuat(x2, y2);
    Xuat(x3, y3);
    cout << "\n\nChu Vi la: ";
    float a = XuLy(x1, y1, x2, y2);
    float b = XuLy(x2, y2, x3, y3);
    float c = XuLy(x1, y1, x3, y3);
    float p = (a + b + c) / 2;
    cout << tinhS(p, a, b, c);
    return 0;
}

float tinhS(float pp, float aa, float bb, float cc)
{
    return sqrt(pp * (pp - aa) * (pp - bb) * (pp - cc));
}

void Nhap(float& aa, float& bb)
{
    cout << "Nhap toa do X: ";
    cin >> aa;
    cout << "Nhap toa do Y: ";
    cin >> bb;
}

float XuLy(float aa, float bb, float cc, float dd)
{
    return sqrt(pow((cc - aa), 2) + pow((dd - bb), 2));
}

void Xuat(float aa, float bb)
{
    cout << "\nHoanh Do: " << aa;
    cout << "\nTung Do: " << bb;
}
