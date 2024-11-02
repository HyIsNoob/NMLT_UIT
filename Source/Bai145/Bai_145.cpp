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
	int flag = 0;
	int i = 0;
	while (i <= nn)
	{
		if (pow(i, 2) == nn)
			flag = 1;
		i = i + 1;
	}
	if (flag == 1)
		cout << "la so chinh phuong";
	else
		cout << "ko la so chinh phuong";
}