
#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int& n);
void Xuatmang(int a[][MAX], int n);

int Fibo(int);
void Nhapmang(int a[][MAX], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = Fibo(i + j + 1);
	}
}
void Xuatmang(int a[][MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
int Fibo(int n) {
	int a = 0, b = 1, c;
	if (n == 0) return a;
	for (int i = 2; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}
int main()
{
	int n, a[MAX][MAX];
	Nhapmang(a, n);
	Xuatmang(a, n);
	return 0;
}