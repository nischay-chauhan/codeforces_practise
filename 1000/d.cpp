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
        long long g = 1;
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                long long d1 = i;
                long long d2 = n / i;
                g = max(g, d1);
                g = max(g, d2);
            }
        }

        cout << g << " " << (n - g) << "\n";
    }
}
