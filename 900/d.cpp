#include <iostream>
#include <vector>
#include <numeric>

void setup_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

void solve() {
    int n, q;
    std::cin >> n >> q;

    std::vector<long long> a(n);
   
    std::vector<long long> prefix_sum(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        prefix_sum[i + 1] = prefix_sum[i] + a[i];
    }

    long long original_total_sum = prefix_sum[n];

    for (int i = 0; i < q; ++i) {
        int l, r;
        long long k;
        std::cin >> l >> r >> k;

        long long removed_sum = prefix_sum[r] - prefix_sum[l - 1];

        long long range_len = r - l + 1;

        long long added_sum = range_len * k;

        long long new_total_sum = original_total_sum - removed_sum + added_sum;

        if (new_total_sum % 2 != 0) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}

int main() {
    setup_io();
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}