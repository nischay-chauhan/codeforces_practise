#include <iostream>
#include <string>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string username;
    std::cin >> username;

    std::set<char> distinct_chars;
    for (char c : username) {
        distinct_chars.insert(c);
    }
    int distinct_count = distinct_chars.size();

    if (distinct_count % 2 == 0) {
        // Even count -> Female
        std::cout << "CHAT WITH HER!" << std::endl;
    } else {
        // Odd count -> Male
        std::cout << "IGNORE HIM!" << std::endl;
    }

    return 0;
}