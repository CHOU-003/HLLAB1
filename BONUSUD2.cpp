#include <iostream>
#include <cmath>
using namespace	std;

int main() {
	float KM, tien;
	
	do{
		cout << "Nhap so Km di dc: ";
		cin >> KM;
		if(KM < 0){
			cout << "Nhap lai so KM !!!" << endl;
			}	
	} while(KM < 0);
	
	if(KM <= 1)	{
		tien = KM * 15000;
		cout << "Tong ten la: " << tien << endl;	
	} else if(KM <= 120){
		if(KM <= 5){
			tien = KM * 13500;
			cout << "Tong ten la: " << tien << endl;
		} else {
			tien = KM * 11000;
			cout << "Tong ten la: " << tien << endl;
		}
	} else {
		tien = (KM*11000)*0.1; 
		cout << "Tong ten la: " << tien << endl;
	}
	return 0;
}