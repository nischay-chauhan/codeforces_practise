#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long D;
    cin >> N >> D;

    vector<long long> P(N);
    for (long long &x : P) cin >> x;

    sort(P.begin(), P.end(), greater<long long>()); 

    long long wins = 0;
    long long i = 0;       
    long long j = N - 1;   

    while (i <= j) {
        long long X = P[i];
        long long need = D / X + 1;   

        if (i + need - 1 <= j) {
            wins++;        
            j -= (need - 1); 
            i++;            
        } else {
            break;          
        }
    }

    cout << wins << "\n";
    return 0;
}
