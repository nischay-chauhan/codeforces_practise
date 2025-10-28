#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> res;
        for (int start = 1; start <= k; start++) {
            for (int i = start; i <= n; i += k) {
                res.push_back(i);
            }
        }
        for (int x : res) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
