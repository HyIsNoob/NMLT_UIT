#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&);
float XuLy(float);
void Xuat(float);

int main()
{
    float r;
    Nhap(r);
    Xuat(r);
    cout << "\n\nDien Tich: ";
    cout << XuLy(r);
    return 0;
}

void Nhap(float& rr)
{
    cout << "Nhap toa do BK: ";
    cin >> rr;
}

void Xuat(float rr)
{
    cout << "\nBan kinh ban nhap: " << rr;
}

float XuLy(float rr)
{
    return 3.14 * 2 * rr;
}


