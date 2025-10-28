#include <iostream>
#include <vector>

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, k;
    std::cin >> n >> k;

    // Read all n scores into a vector.
    std::vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> scores[i];
    }

    // The k-th place finisher's score is at index k-1 in a 0-indexed vector.
    int threshold_score = scores[k - 1];

    int advancers_count = 0;
    // Iterate through all scores to check against the rules.
    for (int i = 0; i < n; ++i) {
        // A participant advances if their score is >= the threshold
        // AND their score is positive.
        if (scores[i] >= threshold_score && scores[i] > 0) {
            advancers_count++;
        }
    }

    std::cout << advancers_count << std::endl;

    return 0;
}