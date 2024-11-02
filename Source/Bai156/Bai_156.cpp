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
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		cout << t << " ";
		i = i + 1;
	}
}