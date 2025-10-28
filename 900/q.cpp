#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long best = 1, cur = 0;
        for (long long i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                // check forward streak
                long long j = i;
                cur = 0;
                while (n % j == 0) {
                    cur++;
                    j++;
                }
                best = max(best, cur);
            }
        }
        cout << best << "\n";
    }
}
