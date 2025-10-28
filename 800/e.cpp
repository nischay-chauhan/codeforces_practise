#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string word;
        cin >> word;
        int len = word.size();
        if (len > 10) {
            cout << word[0] << len - 2 << word[len - 1] << "\n";
        } else {
            cout << word << "\n";
        }
    }
    return 0;
}
