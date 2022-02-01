#include<iostream>

using namespace std;

int main() {

	int a, b;
	cin >> a >> b;
	cout << a + b << endl;
	string first_name, last_name;
	cin >> first_name >> last_name ;
	string full_name = first_name + last_name;
	cout << full_name << endl;

	// Concatination is possible between
	// 1. string and string
	// 2. string and char

	char c, v;
	cin >> c >> v;
	return 0;
}