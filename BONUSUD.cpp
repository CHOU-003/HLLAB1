#include <iostream>
#include <cmath>
using namespace	std;

int main() {
	float Giay, Gio, Phut;
	
	cout << "Nhap tong so giay: ";
	cin >> Giay;
	
	Phut = Giay / 60;
	Gio = Phut / 60;
	
	cout << "Gio  la: " << Gio << endl;
	cout << "Phut  la: " << Phut << endl;
	
	return 0;
		
}