#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<long long> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    long long moves = 0;
    for (int i = 1; i < n; i++) {
        if (b[i] <= b[i - 1]) {
            long long diff = b[i - 1] - b[i];
            long long k = diff / d + 1;
            moves += k;
            b[i] += k * d;
        }
    }

    cout << moves << "\n";
    return 0;
}
