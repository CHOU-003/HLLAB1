#include <iostream>
using namespace	std;

int main() {
	float Tong,Rtd, R1, R2, R3;
	
	cout << "Nhap R1: "; cin >> R1;
	cout << "Nhap R2: "; cin >> R2;
	cout << "Nhap R3: "; cin >> R3;
	
	Rtd = 1/R1 + 1/R2 + 1/R3;
	Tong = 1/Rtd;
	cout << "Tong gia tri mach: " << Tong << endl;
	
	return 0;
}