#include <iostream> 

using namespace std;

int main() {
    
    string text;
    
    cin >> text;
    
    text.append("*");
    
    int num = 1;
    char last = text[0];
   

    for (int i = 1; i < text.length(); i++) {
       
        if (text[i] == last) {
            num++;
            continue;
        }
        
        if (text[i] != last) {
            cout << last;
         
            if (num > 1) {
                cout << num;
            }
            last = text[i];
            num = 1;
        }
    }
    return 0;
}