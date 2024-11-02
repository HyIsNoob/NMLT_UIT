#include <iostream>
#include <cmath>
using namespace std;
float XuLy(float&, float, float, float);

int main()
{
	float S = 0;
	float e = 1;
	float i = 1;
	float m = 0;
	cout << "S la: ";
	cout << XuLy(S, e, i, m);
	return 0;
}

float XuLy(float& SS, float ee, float ii, float mm)
{
	while (ee >= pow(10, -6))
	{
		mm = mm + ii;
		ee = (float)1 / mm;
		SS = SS + ee;
		ii = ii + 1;
	}
	return SS;
}