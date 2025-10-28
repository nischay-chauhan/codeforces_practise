#include <iostream>
#include <string>
#include <algorithm> // Required for std::reverse

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    // 1. Read the two strings.
    std::string s, t;
    std::cin >> s >> t;

    // 2. Reverse the first string, s.
    std::reverse(s.begin(), s.end());

    // 3. Compare the reversed s with t and print the result.
    if (s == t) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}