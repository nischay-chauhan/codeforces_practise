/* D. Distinct Split */

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        vector<int> prefixDistinct(n), suffixDistinct(n);

        int distinct = 0;
        for (int i = 0; i < n; i++) {
            if (freq[s[i] - 'a'] == 0)
                distinct++;
            freq[s[i] - 'a']++;
            prefixDistinct[i] = distinct;
        }

        fill(freq.begin(), freq.end(), 0);
        distinct = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (freq[s[i] - 'a'] == 0)
                distinct++;
            freq[s[i] - 'a']++;
            suffixDistinct[i] = distinct;
        }

        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, prefixDistinct[i] + suffixDistinct[i + 1]);
        }

        cout << ans << "\n";
    }

    return 0;
}
