#include <bits/stdc++.h>
using namespace std;

int main() {
    int posRow, posCol;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int x;
            cin >> x;
            if (x == 1) {
                posRow = i;
                posCol = j;
            }
        }
    }
    cout << abs(posRow - 3) + abs(posCol - 3) << "\n";
    return 0;
}
