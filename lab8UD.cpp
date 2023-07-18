#include <iostream>
#include <cmath>
using namespace	std;

int main() {
	float x, x1, y, y1, HSG, KC;
	cout << "Nhap x= "; cin >> x;
	cout << "Nhap x1= "; cin >> x1;
	cout << "Nhap y= "; cin >> y;
	cout << "Nhap y1= "; cin >> y1;
	
	HSG = (y1 - y)/(x1 - x);
	KC = sqrt(abs(y1 - y) + abs(x1 - x));
	
	cout << "He so khoc la: " << HSG << endl;
	cout << "Khoang cach la: " << KC << endl;
	
	return 0;
	
}