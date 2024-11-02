#include <iostream>
#include <cmath>
using namespace std;

void Nhap(int&);
int XuLy(int);
void Xuat(int);

int main()
{
    int n;
    Nhap(n);
    Xuat(n);
    cout << "\n\nHang don vi la: ";
    cout << XuLy(n);
    return 0;
}

void Nhap(int& nn)
{
    cout << "Nhap so: ";
    cin >> nn;
}

void Xuat(int nn)
{
    cout << "\nSo ban vua nhap la: " << nn;
}

int XuLy(int nn)
{
    return nn % 10;
}
