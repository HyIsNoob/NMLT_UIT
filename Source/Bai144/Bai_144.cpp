#include<cmath>
#include<iostream>
using namespace std;
void xuly(int& nn);
int main()
{
	int n;
	xuly(n);
	return 0;
}
void xuly(int& nn)
{
	cout << "nhap n ";
	cin >> nn;
	int dem = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i = i + 1;
	}
	if (dem == 2)
		cout << "la so nguyen to ";
	else
		cout << "ko la so nguyen to";
}