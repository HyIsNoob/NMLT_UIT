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
    cout << "\n\nDo C: ";
    cout << XuLy(r);
    return 0;
}

void Nhap(float& rr)
{
    cout << "Nhap do F: ";
    cin >> rr;
}

void Xuat(float rr)
{
    cout << "\nDo F ban vua nhap: " << rr;
}

float XuLy(float rr)
{
    return (((float)5 / 9) * (rr - 32));
}
