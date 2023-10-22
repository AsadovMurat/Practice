#include <iostream>
#include <map>

using namespace std;

int main() {

	int n;
	cin >> n;
	int max_count = 0;
	string text;
	map<string, int> counts;

	for (int i = 0; i < n; i++) {
		cin >> text;
		counts[text]++;

		if (counts[text] > max_count) {
			max_count = counts[text];
		}
	}
	for (const auto& entry : counts) {
		if (entry.second == max_count) {
			cout << entry.first << " ";
		}
	}
	return 0;
}