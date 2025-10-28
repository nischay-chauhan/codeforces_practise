#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        int can1 = ((b + c) % 2 == 0) ? 1 : 0;
        int can2 = ((a + c) % 2 == 0) ? 1 : 0;
        int can3 = ((a + b) % 2 == 0) ? 1 : 0;
        cout << can1 << ' ' << can2 << ' ' << can3 << '\n';
    }
    return 0;
}
