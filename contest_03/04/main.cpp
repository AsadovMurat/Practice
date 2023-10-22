#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	int n;
	string text1;
	string text2;
	cin >> n;
	set <string> set1;

	for (int i = 0; i < n; i++) {
		cin >> text1;
		set1.insert(text1);
	}

	int m;
	cin >> m;
	set<string> set2;

	for (int i = 0; i < m; i++) {
		cin >> text2;
		set2.insert(text2);
	}
	int counter = 0;
	for (auto& entry1 : set1) {
		bool boolinfo = set2.count(entry1);
		if (boolinfo) {
			counter = 1;
			cout << entry1 << " ";
		}
	}
	if (counter == 0) {
		cout << -1;
	}

	return 0;
}