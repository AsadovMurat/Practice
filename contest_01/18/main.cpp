#include <iostream>

using namespace std;

int main() {
    int n;
    string res;
    cin >> n;
    while(n > 0) {
        if (n % 26 == 0) {
            res = char(65 + (n - 1) % 26) + res;
                n/= 27;
                continue;
        }
        res = char(64 + n % 26) + res;
        n /= 26;
    }
    cout << res;
    return 0;
}