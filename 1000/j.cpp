#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    iota(p.begin(), p.end(), 0); 

    int minCost = INT_MAX;
    vector<int> best;

    do {
        int cost = 0;
        for (int i = 0; i < n - 1; i++) {
            cost = max(cost, p[i] ^ p[i + 1]);
        }
        if (cost < minCost) {
            minCost = cost;
            best = p;
        }
    } while (next_permutation(p.begin(), p.end()));

    cout << "Best cost = " << minCost << "\n";
    for (int x : best) cout << x << " ";
    cout << "\n";
}
