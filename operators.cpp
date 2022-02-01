#include<iostream>

using namespace std;

int main() {

	// +, -, *, /, %

	int a = 10;
	int b = 5;

	a += b; // a = a+b -- 15
	cout << a << "\n";
	a -= b; // a = a-b -- 10
	cout << a << "\n" ;
	a *= b; // a = a*b -- 50
	cout << a  << "\n" ;
	a /= b; // a = a/b -- 10
	cout << a << endl;
	a %= b; // a = a%b -- 0
	cout << a << endl;

	// Increment Operators
	cout << "---Increment Operator---" << endl;

	int c = 3;
	c++; // c += 1
	cout << c << endl; // 4
	cout << ++c << endl; // 5 // c = c+1(gets updated immediately)
	cout << c++ << endl; // 5 // c = c+1(gets updated in next statement)
	cout << c << endl; // 6

	cout << "---Decrement Operator---" << endl;
	int x = 1;

	cout << x-- << endl; // 1 (x = 0)
	cout << --x << endl; // -1  (x = -1)
	cout << x << endl;  // -1
	cout << x-- << endl;// -1 (x = -2)
	cout << ++x << endl;// -1 (x = -1)
	cout << x << endl;// -1

	return 0;
}