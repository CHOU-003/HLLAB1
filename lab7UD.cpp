#include <iostream>
using namespace	std;
#define PI 3.14

int main() {
	 float BK, S, V; 
	 cout << "Nhap ban kinh hinh tron: ";
	 cin >> BK;
	 
	S = 4*PI*(BK*2);
	V = (4/3)*PI*(BK*3);
	cout << "Dien tich hinh tron la: " << S << endl;
	cout << "The tich hinh tron la: " << V << endl;
	
	return 0;
}