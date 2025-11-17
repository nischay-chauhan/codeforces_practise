#include <bits/stdc++.h>
using namespace std;

bool isFair(long long x) {
    long long y = x;
    while (y > 0) {
        int d = y % 10;
        if (d != 0 && x % d != 0) return false;
        y /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long x = n;
        while (!isFair(x)) x++;
        cout << x << "\n";
    }
}
