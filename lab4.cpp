#include <iostream>
using namespace	std;
#define PI 3.14

int main() {
 	float BK;
 	float chuvi, dientich;
 	
 	cout << "Nhap ban kinh: ";
 	cin >> BK;
 	
 	chuvi = 2*PI*BK;
 	dientich = chuvi/2*PI;
 	
 	cout << "Chu vi hinh tron la: " << chuvi <<endl;
 	cout << "Dien tich hinh tron la: " << dientich << endl;
 	
 	return 0;
}