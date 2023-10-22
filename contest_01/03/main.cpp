#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float a, b, res;
	cin >> a;
	cin >> b;
	if (b == 0) 
		cout << "ERROR";
	else
		res = a / b;
	cout << res;
	return 0;
}