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
	int dn = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == nn)
		cout << "la so doi xung ";
	else
		cout << "ko la so doi xung ";
}