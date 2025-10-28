#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int c = 1;  
    bool is = false;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            c++;
            if (c >= 7) {
                is = true;
                break;
            }
        } else {
            c = 1;
        }
    }

    cout << (is ? "YES" : "NO") << "\n";
    return 0;
}
