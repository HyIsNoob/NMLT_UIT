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
	int s = 0;
	int i = 1;
	while (i < nn)
	{
		if (nn % i == 0)
			s = s + i;
		i = i + 1;
	}
	if (s == nn)
		cout << "co la so hoan thien";
	else
		cout << "ko la so hoan thien ";
}