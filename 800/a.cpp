#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string word;
    std::cin >> word;
    if (word.length() > 10) {
        std::cout << word[0] << word.length() - 2 << word.back() << std::endl;
    } else {
        std::cout << word << std::endl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}