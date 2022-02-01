#include<iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("C:/Users/Dolby/Study/C++/input.txt", "r", stdin);
	freopen("C:/Users/Dolby/Study/C++/output.txt", "w", stdout);
#endif
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