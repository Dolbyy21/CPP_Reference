#include<iostream>

using namespace std;

int main() {


	// if
	// if - else
	// if -else if -else if -else if .... (else)

	// Logical Operators
	// && -> AND -> (* operator) 1*0 0*1 == 0 1*1 = 1 , 0*0 = 0
	// || -> OR  -> (+ oepearator) 1+0 0+1 == 1 1+1 = 2, 0+0 = 0

	// 1 || 0 || 1 || 0 = true
	// 1 && 1 && 1 && 1 && 0 = false
	// (1 && 0) || (1 && 1) = 0 || 1 = true
	// (1 || 0) && (1 || 0) = 1 && 1 = true
	// (1 || 0) && (1 && 0) = 1 && 0 = false
	// False Conditions -> 0, false, NULL

	if (2) {
		cout << "TRUE" << endl;
	} else {
		cout << "FALSE" << endl;
	}

	int a;
	string s;
	char c;
	cin >> a >> s >> c;
	if (a == 1 && s == "Gokula" && c == 'D') { // (1 && 0 && 1)
		cout << "Success";
	} else {
		cout << "Not Success";
	}



	return 0;
}