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
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + (float)1 / i;
		cout << s << " ";
		i = i + 1;
	}
}