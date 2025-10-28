#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    if (!(cin >> n >> k)) return 0;

    long long half = (n + 1) / 2;
    long long result;
    if (k <= half) {
        result = 2 * k - 1;
    } else {
        result = 2 * (k - half);
    }

    cout << result << '\n';
    return 0;
}
