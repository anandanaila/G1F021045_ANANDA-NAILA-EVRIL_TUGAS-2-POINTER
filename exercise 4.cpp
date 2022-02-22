#include <iostream>
using namespace std;

int main(){
	int a, b, c, *p1, *p2, *p3;
	
	a = 10;
	cout << "Nilai a : " << a << endl;
	
	b = 15;
	cout << "Nilai b : " << b << endl;
	
	c = 27;
	cout << "Nilai c : " << c << endl;
	
	p1 = &a;
	cout << "Nilai p1 : " << p1 << endl;
	
	p2 = &b;
	cout << "Nilai p2 : " << p2 << endl;
	
	*p1 = c;
	cout << "Nilai a : " << *p1 << endl;
	
	a = *p2;
	cout << "Nilai a : " << a << endl;
	
	b = 6;
	cout << "Nilai b : " << b << endl;
	
	p3 = &b;
	cout << "Nilai p3 : " << p3 << endl;
	
	p3 = &c;
	cout << "Nilai p3 : " << p3 << endl;
	
	*p1 = *p3;
	cout << "Nilai c : " << *p1 << endl;	
	
	return 0;
}
