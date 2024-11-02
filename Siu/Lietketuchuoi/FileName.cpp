#include <iostream>
#include <string>
using namespace std;
const int MAX = 100;

void Nhap(char[]);
void Xuat(char[]);
void LietKeTuInChuoi(char[]);

int main()
{
	char a[MAX];
	Nhap(a); cout << endl;
	Xuat(a); cout << endl;
	LietKeTuInChuoi(a);
}

void LietKeTuInChuoi(char a[MAX])
{
	cout << "Liet ke: " << endl;
	for (int i = 0; a[i] != '\0'; i++)
	{
		cout << a[i];
		if (a[i] == ' ')
			cout << endl;
	}
}

void Nhap(char a[MAX])
{
	cout << "Nhap chuoi: ";
	cin.getline(a, MAX);
}

void Xuat(char a[MAX])
{
	cout << "Chuoi ban vua nhap: " << a;
}