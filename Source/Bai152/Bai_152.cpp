#include<cmath>
#include<iostream>
using namespace std;
void xuly(int&);
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
	int flag = 1;
	int t = nn;
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			flag = 0;
		t = t / 3;
	}
	if (flag == 1)
		cout << "la dang";
	else
		cout << "ko la dang";
}