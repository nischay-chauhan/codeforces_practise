#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    if (cin >> s) {
        if (!s.empty()) s[0] = char(toupper(char(s[0])));
        cout << s;
    }
    return 0;
}