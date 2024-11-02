#include<cmath>
#include<iostream>
using namespace std;
void xuly(int&);
int main()
{
	int n;
	cin >> n;
	cout << "so luong chu so lon nhat la ";
	xuly(n);
	return 0;
}
void xuly(int& nn)
{
	int lc = nn % 10;
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv == lc)
			dem++;
		t = t / 10;
	}
	cout << dem;
}