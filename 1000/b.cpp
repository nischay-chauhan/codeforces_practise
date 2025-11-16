#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << "\n";
            continue;
        }

        if (a > b) swap(a, b);

        if (b % a != 0) {
            cout << -1 << "\n";
            continue;
        }

        long long ratio = b / a;
        if ((ratio & (ratio - 1)) != 0) {
            cout << -1 << "\n";
            continue;
        }

        int k = 0;
        while (ratio > 1) {
            ratio >>= 1;
            k++;
        }

        int ops = (k + 2) / 3;
        cout << ops << "\n";
    }
    return 0;
}
