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
	int ahh = nn;
	cout << ahh<<" ";
	while (ahh != 1)
	{
		if (ahh % 2 != 0)
			ahh = ahh / 2;
		else
			ahh = 3 * ahh + 1;
		cout << ahh << " ";
	}
}