#include <iostream>
#include <cmath>
using namespace std;
float XuLy(float&, float, float);

int main()
{
	float S = 0;
	float e = 1;
	float i = 1;
	cout << "S la: ";
	cout << XuLy(S, e, i);
	return 0;
}

float XuLy(float& SS, float ee, float ii)
{
	while (ee >= pow(10, -6))
	{
		ee = (float)1 / ii;
		SS = SS + ee;
		ii = ii + 2;
	}
	return SS;
}