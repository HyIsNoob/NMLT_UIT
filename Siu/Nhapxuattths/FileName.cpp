#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAXN 100

struct SinhVien {
	char* MASV;
	char* HoTen;
	char NgaySinh[12];
	char* GioiTinh;
	float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien*& A, int& n)
{
	cout << "Nhap so luong sinh vien: ";
	cin >> n;
	A = new SinhVien[n];

	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		A[i].MASV = new char[MAXN];
		cin.getline(A[i].MASV, MAXN);
		A[i].HoTen = new char[MAXN];
		cin.getline(A[i].HoTen, MAXN);
		cin.getline(A[i].NgaySinh, 12);
		A[i].GioiTinh = new char[MAXN];
		cin.getline(A[i].GioiTinh, MAXN);
		cin >> A[i].DiemToan >> A[i].DiemLy >> A[i].DiemHoa;
	}
}
void Xuat(SinhVien* A, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << A[i].MASV << "	";
		cout << A[i].HoTen << "	";
		cout << A[i].NgaySinh << "	";
		cout << A[i].GioiTinh << "	";
		cout << A[i].DiemToan << A[i].DiemLy << A[i].DiemHoa;
		cout << endl;
	}
}
int main() {
	int n;
	SinhVien* A;
	Nhap(A, n);
	Xuat(A, n);
	return 0;
}
