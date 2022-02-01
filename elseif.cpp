#include<iostream>

using namespace std;

/*

	if(condition){

		//statement

	}else if(condition){

		// statement

	}else{

		// statement

	}

*/
int main() {

	int a, b;
	cin >> a >> b;

	if (a == b)
		cout << "Equal";

	else if (a * b == a + b)
		cout << "Product==Sum" << endl ;

	else	//
		cout << "Get Lost" << endl;

	cout << "Okay";

	return 0;
}