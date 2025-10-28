// A. Forked! - generalized knight fork counter
// Approach: Generate all positions that attack the king with (a,b)-knight moves
//           and count how many of those also attack the queen.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a, b; 
        cin >> a >> b;
        long long xK, yK; 
        cin >> xK >> yK;
        long long xQ, yQ; 
        cin >> xQ >> yQ;

        // Generate all unique squares from which the knight attacks the king
        set<pair<long long,long long>> attackers;
        long long dx[2] = {a, b};
        long long dy[2] = {b, a};
        for (int i = 0; i < 2; ++i) {
            for (int sx : {-1, 1}) {
                for (int sy : {-1, 1}) {
                    attackers.insert({xK + sx * dx[i], yK + sy * dy[i]});
                }
            }
        }

        auto attacks_queen = [&](long long x, long long y) -> bool {
            long long ddx = llabs(xQ - x);
            long long ddy = llabs(yQ - y);
            return (ddx == a && ddy == b) || (ddx == b && ddy == a);
        };

        int ans = 0;
        for (const auto &p : attackers) {
            if (attacks_queen(p.first, p.second)) ++ans;
        }

        cout << ans << '\n';
    }

    return 0;
}
