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
    cout << "\n\nDo F: ";
    cout << XuLy(r);
    return 0;
}

void Nhap(float& rr)
{
    cout << "Nhap do C: ";
    cin >> rr;
}

void Xuat(float rr)
{
    cout << "\nDo C ban vua nhap: " << rr;
}

float XuLy(float rr)
{
    return (((float)9 / 5) * rr) + 32;
}


