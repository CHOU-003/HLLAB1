#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float TB, M = 8, M1 = 9, M2 = 10, M3 = 8, M4 = 7;
	TB = (M+M1+M2+M3+M4)/5;
	
	cout << "***BAI THUC HANH MON LAP TRINH C***" << endl;
	for(int i=0; i<15; i++){
		cout <<".";
	}cout << "TUAN 1";
	for(int i=0; i<15; i++){
		cout <<".";
	}
	cout << "\nMSSV: XXX.XXX.XXX" << endl;
	cout << "HO VA TEN: Nguyen Van Hung." << endl;
	cout << "LOP: CNTT100" << endl;
	cout << "KHOA: CONG NGHE THONG TIN." << endl;
	cout << "Nam hoc: 2016 - 2017" << endl;
	cout << "**BANG DIEM**" <<endl;
	cout << "Mon 1: " << M << endl;
	cout << "Mon 2: " << M1 << endl;
	cout << "Mon 3: " << M2 << endl;
	cout << "Mon 4: " << M3 << endl;
	cout << "Mon 5: " << M4 << endl;
	cout << "Diem TB: " << TB << endl;
	
	return 0;
}