#include <iostream>
using namespace	std;

int main() {
	int x, y;
	
	cout << "Nhap x= "; cin >> x;
	cout << "nhap y= "; cin >> y;
	
	int min = x;
	if(y > min){
		cout <<"là so max = " << y << " là so min = " << x;
	}else {
		 cout <<"là so max = " << x << " là so min = " << y;	
 	}
 	cout << endl;
 	
 	return 0;
}