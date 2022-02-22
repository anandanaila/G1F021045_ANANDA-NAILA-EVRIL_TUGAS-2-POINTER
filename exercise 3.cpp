#include <iostream>
using namespace std;

int main(){
	int a, b, c, *p1, *p2, *p3;
	
	a = 10;
	cout << "Nilai a : " << a << endl;
	
	b = 15;
	cout << "Nilai b : " << b << endl;
	
	p1 = &b;
	cout << "Nilai p1 : " << p1 << endl;
	
	p2 = p1;
	cout << "Nilai p2 : " << p2 << endl;
	
	c = 27;
	cout << "Nilai c : " << c << endl;
	
	p1 = &c;
	cout << "Nilai p1 : " << p1 << endl;
	
	a = *p1;
	cout << "Nilai a : " << a << endl;
	
	p3 = &b;
	cout << "Nilai p3 : " << p3 << endl;
	
	*p2 = 8;
	cout << "Nilai b : " << *p2 << endl;
	
	return 0;
}
