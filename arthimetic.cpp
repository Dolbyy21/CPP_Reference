#include<iostream>

using namespace std;

int main() {
	int a = 2, b = 3;

	// type-casting??(Explicit Conversion)	// Type-Casting

	// int < float < double < long
	double a_d = (double)a;
	double c = 2;
	cout << a + b << endl; // 5
	cout << a - b << endl; // -1
	cout << a*b << endl; // 6
	cout << b / c << "\n"; // 0.666666

	cout << "a/b  =  " << a / b << endl;
	cout << "(double)a/b  =  " << (double)a / b << endl;
	// Percentile - Gives Remainder
	cout << " 10%2 = " << 10 % 2 << endl;
	cout << 8 % 3 << endl;
	cout << (a * b)*a; 	// 12
	return 0;
}

