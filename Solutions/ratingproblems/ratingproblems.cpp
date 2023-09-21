// https://open.kattis.com/problems/ratingproblems


// Solution
#include<iostream>

int main() {
    int n, k;
    std::cin >> n >> k;
    
    double sumRating = 0;
    for (int i = 0; i < k; i++) {
        int rating;
        std::cin >> rating;
        sumRating += rating;
    }
    
    int worstRating = -3*(n-k);
    int bestRating = 3*(n-k);
    
    std::cout << (sumRating + worstRating)/n <<
        ' ' << (sumRating + bestRating)/n;
    
    return 0;
}