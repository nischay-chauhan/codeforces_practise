#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;

        // dp[pos][diff] : -1 unknown, 0 false, 1 true
        // pos ranges 1..n+1, diff 0..10
        vector<array<int,11>> dp(n+2);
        for (int i = 0; i <= n+1; ++i) for (int j = 0; j < 11; ++j) dp[i][j] = -1;

        function<int(int,int)> can = [&](int pos, int diff)->int {
            if (dp[pos][diff] != -1) return dp[pos][diff];
            if (pos == n+1) {
                // finished: valid if difference is 0 mod 11
                return dp[pos][diff] = (diff == 0);
            }
            // choose digit(s)
            vector<int> choices;
            if (pos == n) {
                choices = {6}; // last digit must be 6 (even)
            } else {
                choices = {3, 6};
            }
            for (int d : choices) {
                int ndiff;
                if (pos % 2 == 1) {
                    ndiff = (diff + d) % 11;
                } else {
                    ndiff = (diff - d) % 11;
                    if (ndiff < 0) ndiff += 11;
                }
                if (can(pos+1, ndiff)) {
                    dp[pos][diff] = 1;
                    return 1;
                }
            }
            dp[pos][diff] = 0;
            return 0;
        };

        if (!can(1, 0)) {
            cout << -1 << '\n';
            continue;
        }
        // reconstruct smallest (lexicographically) => try 3 then 6
        string ans;
        int pos = 1, diff = 0;
        while (pos <= n) {
            vector<int> choices;
            if (pos == n) choices = {6};
            else choices = {3, 6};
            bool placed = false;
            for (int d : choices) {
                int ndiff;
                if (pos % 2 == 1) ndiff = (diff + d) % 11;
                else {
                    ndiff = (diff - d) % 11;
                    if (ndiff < 0) ndiff += 11;
                }
                if (can(pos+1, ndiff)) {
                    ans.push_back(char('0' + d));
                    diff = ndiff;
                    placed = true;
                    break;
                }
            }
            if (!placed) {
                // shouldn't happen because we checked can(1,0)
                break;
            }
            pos++;
        }
        cout << ans << '\n';
    }
    return 0;
}
