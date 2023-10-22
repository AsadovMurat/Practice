#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float a, b, c;
	cin >> a;
	cin >> b;
	if (a < 0 || b < 0) {
		cout << "ERROR";
	}
	else
		c = sqrt((pow(a, 2)) + (pow(b, 2)));
	cout << c;
	return 0;
}
