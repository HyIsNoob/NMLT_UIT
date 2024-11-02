#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int c[500];
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (c[i] < c[j]) {
				int temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}

	int hIndex = 0;
	for (int i = 0; i < n; i++) {
		if (c[i] >= i + 1) {
			hIndex = i + 1;
		}
		else {
			break;
		}
	}

	cout << hIndex << endl;

	return 0;
}