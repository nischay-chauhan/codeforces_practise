#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        if (k == 1) {
            bool sorted = true;
            for (int i = 1; i < n; i++) {
                if (vec[i] < vec[i - 1]) {
                    sorted = false;
                    break;
                }
            }
            cout << (sorted ? "YES" : "NO") << "\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
