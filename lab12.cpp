#include <iostream>
#include <cmath>
using namespace	std;

int main() {
	int n, tong; 
	cout << "Nhap n= ";
	cin >> n;
	
	tong = (n/10) + (n%10);
	cout << "Tong hai so la: " << tong<< endl;
	
	return 0;
}