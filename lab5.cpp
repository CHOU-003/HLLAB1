#include <iostream>
using namespace	std;

int main() {
	int x, y;
	
	cout << "Nhap x= "; cin >> x;
	cout << "nhap y= "; cin >> y;
	
	int min = x;
	if(y > min){
		cout <<"l� so max = " << y << " l� so min = " << x;
	}else {
		 cout <<"l� so max = " << x << " l� so min = " << y;	
 	}
 	cout << endl;
 	
 	return 0;
}