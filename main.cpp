#include<iostream>

using namespace std;

int main() {
	int hist[256] = {0};

	char c;
	while (cin.get(c)) {
		if (('z' >= c && c >= 'a') || ('Z' >= c && c >= 'A')) {
			hist[c]++; 
		}

		if (c == '\n') break;
	} 

	while (cin >> c) {
		if (--hist[c] < 0) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
}
