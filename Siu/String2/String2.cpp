#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

struct Point {
    char ten[100];
    int x;
    int y;
};
typedef Point POINT;

void Nhap(POINT*& A) {
    A = new POINT;
    cin.getline(A->ten, 100);
    cin >> A->x >> A->y;
}

void Xuat_InHoa_TenDiem(POINT* A) {
    for (int i = 0; i < strlen(A->ten); i++) {
        A->ten[i] = toupper(A->ten[i]);
    }
    cout << A->ten;
    cout << "(" << A->x << ", " << A->y << ")";
}

int main() {
    POINT* A;
    Nhap(A);
    Xuat_InHoa_TenDiem(A);
    return 0;
}