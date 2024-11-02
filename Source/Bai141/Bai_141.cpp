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
	int dt = abs(nn);
	while (dt >= 10)
	{
		dt = dt / 10;
	} 
	cout << "chu so dau tien la " << dt;
}