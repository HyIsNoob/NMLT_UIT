#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int&);
void Xuly(int);

int main()
{
	int n;
	Nhap(n);
	Xuly(n);
	return 0;
}

void Nhap(int& nn)
{
	cout << "nhap n ";
	cin >> nn;
}

void Xuly(int nn)
{
	float at = 1;
	float bt = 1;
	float ahh, bhh;
	int i = 2;
	while (i <= nn)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout<< ahh<<endl;
	cout<<bhh;
}


