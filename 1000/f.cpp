#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        if (c == 'g') {
            cout << 0 << "\n";
            continue;
        }

        string t = s + s;
        int ans = 0;

        vector<int> greenPos;
        for (int i = 0; i < 2 * n; i++) {
            if (t[i] == 'g')
                greenPos.push_back(i);
        }

        int ptr = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                while (greenPos[ptr] < i) ptr++;
                ans = max(ans, greenPos[ptr] - i);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
