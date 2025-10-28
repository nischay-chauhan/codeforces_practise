#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string s;
    std::cin >> s;

    std::vector<char> numbers;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != '+') {
            numbers.push_back(s[i]);
        }
    }

    std::sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i];
        if (i < numbers.size() - 1) {
            std::cout << "+";
        }
    }
    std::cout << std::endl;

    return 0;
}