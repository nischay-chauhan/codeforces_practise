#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while(t--){
        int64 a,b;
        cin >> a >> b;
        int64 xK,yK,xQ,yQ;
        cin >> xK >> yK;
        cin >> xQ >> yQ;
        int64 dx = xQ - xK;
        int64 dy = yQ - yK;

        set<pair<int64,int64>> M;
        vector<pair<int64,int64>> base = {
            {a,b},{a,-b},{-a,b},{-a,-b},
            {b,a},{b,-a},{-b,a},{-b,-a}
        };
        for(auto &p: base) M.insert(p);

        int ans = 0;
        for(auto u : M){
            pair<int64,int64> v = { u.first - dx, u.second - dy };
            if(M.find(v) != M.end()) ++ans;
        }

        cout << ans << '\n';
    }
    return 0;
}
