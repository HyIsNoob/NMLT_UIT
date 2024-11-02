#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&);
float XuLy(float);
void Xuat(float);

int main()
{
    float x;
    Nhap(x);
    Xuat(x);
    cout << "\n\nx7 la: ";
    cout << XuLy(XuLy(x)) * XuLy(x) * x;
    return 0;
}

void Nhap(float& xx)
{
    cout << "Nhap x: ";
    cin >> xx;
}

void Xuat(float xx)
{
    cout << "\nx ban vua nhap la: " << xx;
}

float XuLy(float xx)
{
    return xx * xx;
}
