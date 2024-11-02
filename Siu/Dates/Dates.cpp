#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int[], int[]);
void MangToInt(int[], int&, int&, int&);
bool KiemTraNgay(int, int, int);
void HoanVi(int&, int&);
void SapXep(int[]);
void NgayHopLe(int[], int[], int[], int&, int&, int&);
int isThang(int, int);
bool isNhuan(int);
bool nextPermutation(int[], int);

int main()
{
	int Y[4], M[2], D[2];
	int Nam = 0, Thang = 0, Ngay = 0;
	Nhap(Y, M, D);
	cout << endl;
	NgayHopLe(Y, M, D, Nam, Thang, Ngay);
	return 0;
}

bool nextPermutation(int arr[], int n) {
	int i = n - 2;
	while (i >= 0 && arr[i] >= arr[i + 1]) {
		i--;
	}
	if (i < 0) {
		return false;
	}
	int j = n - 1;
	while (arr[j] <= arr[i]) {
		j--;
	}
	swap(arr[i], arr[j]);
	reverse(arr + i + 1, arr + n);
	return true;
}

void NgayHopLe(int Y[4], int M[2], int D[2], int& Nam, int& Thang, int& Ngay)
{
	int Dates[8] = { Y[0], Y[1], Y[2], Y[3], M[0], M[1], D[0], D[1] };
	SapXep(Dates);
	int countNgayHopLe = 0;
	while (nextPermutation(Dates, 8))
	{
		int nam = Dates[0] * 1000 + Dates[1] * 100 + Dates[2] * 10 + Dates[3];
		int thang = Dates[4] * 10 + Dates[5];
		int ngay = Dates[6] * 10 + Dates[7];
		if (KiemTraNgay(nam, thang, ngay))
			++countNgayHopLe;
	}
	cout << countNgayHopLe << endl;
	int OriginalDates[8] = { Y[0], Y[1], Y[2], Y[3], M[0], M[1], D[0], D[1] };
	for (int i = 0; i < 8; ++i)
		Dates[i] = OriginalDates[i];
	while (nextPermutation(Dates, 8))
	{
		int nam = Dates[0] * 1000 + Dates[1] * 100 + Dates[2] * 10 + Dates[3];
		int thang = Dates[4] * 10 + Dates[5];
		int ngay = Dates[6] * 10 + Dates[7];
		if (KiemTraNgay(nam, thang, ngay))
			cout << setw(4) << setfill('0') << nam << " " << setw(2) << setfill('0') << thang << " " << setw(2) << setfill('0') << ngay << endl;
	}
}

void Nhap(int Y[4], int M[2], int D[2])
{
	Y[0] = 0;
	Y[1] = 0;
	Y[2] = 0;
	Y[3] = 0;
	M[0] = 0;
	M[1] = 0;
	D[0] = 0;
	D[1] = 0;
	int Year, Month, Day;
	cin >> Year >> Month >> Day;
	int MAX_YEAR = 3, MAX_M = 1, MAX_D = 1;
	while (Year != 0)
	{
		int a = Year % 10;
		Y[MAX_YEAR] = a;
		MAX_YEAR--;
		Year = Year / 10;
	}
	while (Month != 0)
	{
		int a = Month % 10;
		M[MAX_M] = a;
		MAX_M--;
		Month = Month / 10;
	}
	while (Day != 0)
	{
		int a = Day % 10;
		D[MAX_D] = a;
		MAX_D--;
		Day = Day / 10;
	}
}

bool KiemTraNgay(int nam, int thang, int ngay)
{
	if (nam <= 0 || thang < 1 || thang > 12 || ngay < 1 || ngay > isThang(thang, nam))
		return false;
	return true;
}

void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void SapXep(int a[])
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = i + 1; j < 8; j++)
		{
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
		}
	}
}

int isThang(int a, int nam)
{
	int thang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 31, 30 };
	if ((nam % 400 == 0) || ((nam % 100 != 0) && (nam % 4 == 0)))
		thang[1] = 29;
	return thang[a - 1];
}
