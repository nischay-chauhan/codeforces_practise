#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    std::vector<int> freq(26, 0);
    for (char ch : s) {
        freq[ch - 'a']++;
    }

    bool possible = false;
    for (int k = 1; k < n - 1; ++k) {
        if (freq[s[k] - 'a'] > 1) {
            possible = true;
            break;
        }
    }

    if (possible) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
}

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}