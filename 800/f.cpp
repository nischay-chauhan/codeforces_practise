#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string others;
        int countT = 0;
        
        for (char c : s) {
            if (c == 'T') countT++;
            else others += c;
        }
        
        // Print all T's first, then all others
        for (int i = 0; i < countT; i++) cout << 'T';
        cout << others << "\n";
    }
    return 0;
}
