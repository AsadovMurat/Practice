#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
      string  a;
      string  b;
      cin >> a;
      cin >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    return 0;
}