#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&, float&);
float XuLy(float, float);
void Xuat(float, float);

int main()
{
    float r, n;
    Nhap(r, n);
    Xuat(r, n);
    cout << "\n\nDien tich: ";
    cout << XuLy(r, n);
    return 0;
}

void Nhap(float& rr, float& nn)
{
    cout << "Nhap do Ban Kinh: ";
    cin >> rr;
    cout << "Nhap do canh: ";
    cin >> nn;
}

void Xuat(float rr, float nn)
{
    cout << "\nBan kinh ban vua nhap: " << rr;
    cout << "\nSo canh ban vua nhap: " << nn;
}

float XuLy(float rr, float nn)
{
    return ((1 / 2) * (nn * rr * rr) * (sin((2 * M_PI) / nn)));
}
