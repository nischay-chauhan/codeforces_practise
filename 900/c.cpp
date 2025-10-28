#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m, p, q;
        cin >> n >> m >> p >> q;
        if (n % p == 0) {
            cout << ((m == (n / p) * q) ? "YES\n" : "NO\n");
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
