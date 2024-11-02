#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&, float&);
float XuLy(float&, float&);
void Xuat(float, float);

int main()
{
    float a, b;
    Nhap(a, b);
    Xuat(a, b);
    XuLy(a, b);
    cout << "\n\nSo a la: ";
    cout << a;
    cout << "\nSo b la: ";
    cout << b;
    return 0;
}

void Nhap(float& aa, float& bb)
{
    cout << "Nhap so a: ";
    cin >> aa;
    cout << "Nhap so b: ";
    cin >> bb;
}

void Xuat(float aa, float bb)
{
    cout << "\nSo ban a vua nhap la: " << aa;
    cout << "\nSo ban b vua nhap la: " << bb;
}

float XuLy(float& aa, float& bb)
{
    float temp = aa;
    aa = bb;
    bb = temp;
    return aa, bb;
}
