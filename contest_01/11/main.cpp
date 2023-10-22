#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;

	if (abs(A - B) > abs(A - C)) {
		cout << "C ";
		cout << abs(A - C);

}
else{ 
		cout << "B ";
	cout << abs(A - B);
}
	return 0;
}
