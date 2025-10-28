#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n; long long k;
        string s;
        cin >> n >> k >> s;

        string rev = s;
        reverse(rev.begin(), rev.end());

        if (s < rev) {
            cout << "YES\n";
            continue;
        }
        if (k == 0) {
            cout << "NO\n";
            continue;
        }

        if (s != rev) {
            cout << "YES\n";
            continue;
        }
        
        bool all_same = true;
        for (int i = 1; i < n; ++i) {
            if (s[i] != s[0]) { all_same = false; break; }
        }
        cout << (all_same ? "NO\n" : "YES\n");
    }
    return 0;
}
