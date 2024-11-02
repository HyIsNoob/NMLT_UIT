#include <iostream>
using namespace std;

int main()
{
	int l, r;
	cout << "Nhap chieu dai: ";
	cin >> l;
	cout << "Nhap chieu rong: ";
	cin >> r;
	int j = 0;
	for (int i = 0; i < l; i++)
	{
		while (j < r)
		{
			if (j == (r - 1) || j == 0)
			{
				cout << endl;
				for (int i = 0; i < l; i++)
				{
					cout << "*";
				}
			}
			else
			{
				cout << endl;
				cout << "*";
				for (int i = 1; i < l - 1; i++)
				{
					cout << " ";
				}
				cout << "*";
			}
			j++;
		}
	}
	cout << endl;
	return 0;
}