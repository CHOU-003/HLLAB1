#include <iostream>
#include <cmath>
using namespace	std;

int main() {
	int a, b, CN, CD;
	cout << "Nhap a= ";
	cin >> a;
	cout << "Nhap b= ";
	cin >> b;
	CN = a/b;
	CD = a%b;
	
	cout << "Phan nguyen la: " << CN << endl;
	cout << "Phan du la: " << CD << endl;
	
	return 0;
}