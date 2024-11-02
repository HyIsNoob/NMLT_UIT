#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int&);
string Xuly(int);
int main()
{
	int n;
	Nhap(n);
	cout << Xuly(n);
	return 0;
}
void Nhap(int& nn)
{
	cout << "nhap n ";
	cin >> nn;
}

string Xuly(int nn)
{
	int flag = 1;
	int t = nn;
	while (t >= 10)
	{
		int dv = t % 10;
		int hc = t % 10;
		if (hc < dv)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		return"tang";
	else
		return"giam";
}