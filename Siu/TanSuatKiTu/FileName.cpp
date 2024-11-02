#include <iostream>
#include <string>
using namespace std;

void Nhap(string&);
void Xuat(string);
void DemTanSuat(string);

int main()
{
	string a;
	Nhap(a); cout << endl;
	Xuat(a); cout << endl << endl;
	DemTanSuat(a);
}

void DemTanSuat(string aa)
{
	int ts[256] = { 0 };
	for (char x : aa)
		ts[x]++;
	for (int i = 0; i < 256; i++)
		if (ts[i] != NULL)
			cout << (char)i << ": " << ts[i] << endl;
}

void Nhap(string& aa)
{
	cout << "Nhap chuoi ki tu: ";
	getline(cin, aa);
}

void Xuat(string aa)
{
	cout << "Chuoi ban vua nhap la: ";
	for (char x : aa)
		cout << x;
}