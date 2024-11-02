#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&);
float XuLy(float);
void Xuat(float);

int main()
{
    float n;
    Nhap(n);
    Xuat(n);
    cout << "\n\nS la ";
    cout << XuLy(n);
    return 0;
}

void Nhap(float& nn)
{
    cout << "Nhap so: ";
    cin >> nn;
}

void Xuat(float nn)
{
    cout << "\nSo ban vua nhap la: " << nn;
}

float XuLy(float nn)
{
    int i = 2;
    float S = 0;
    while (i <= 2*nn)
    {
        S = S + (float)1 / i;
        i = i + 2;
    }
    return S;
}
