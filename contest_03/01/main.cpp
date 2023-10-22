#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int x, y;
	cin >> x;
	vector <int> vector1(x);

	for (int i = 0; i < x; i++) {
		cin >> vector1[i];
	}

	cin >> y;
	vector <int> vector2(y);

	for (int i = 0; i < y; i++) {
		cin >> vector2[i];
	}
	vector1.insert(vector1.end(), vector2.begin(), vector2.end());

	sort(vector1.begin(), vector1.end());

	for (int i = 0; i < vector1.size(); i++) {
		cout << vector1[i] << " ";
	}
	return 0;
}