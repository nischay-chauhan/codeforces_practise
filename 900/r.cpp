#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int max_run = 0, cur_run = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) cur_run++;
            else {
                max_run = max(max_run, cur_run);
                cur_run = 1;
            }
        }
        max_run = max(max_run, cur_run);

        cout << max_run + 1 << "\n";
    }
}
