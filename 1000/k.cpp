#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int c0 = 0 , c1 = 0;
        for(char c : s){
            if(c == '0') c0++;
            else c1++;
        }

        cout << max(c0, c1) << "\n";
    }

    return 0;
}