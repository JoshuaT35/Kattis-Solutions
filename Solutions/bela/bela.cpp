// https://open.kattis.com/problems/bela


// Solution
#include<iostream>
#include<unordered_map>
#include<array>

int main() {
    int n;
    char b;
    std::cin >> n >> b;
    
    int sum = 0;
    // first int is dominant suit
    // second int is non-dominant suit
    std::unordered_map<char, std::array<int, 2>> scores = {
        {'A', {11, 11}},
        {'K', {4, 4}},
        {'Q', {3, 3}},
        {'J', {20, 2}},
        {'T', {10, 10}},
        {'9', {14, 0}},
        {'8', {0, 0}},
        {'7', {0, 0}}
    };

    for (int i = 0; i < 4*n; i++) {
        std::string combination;
        std::cin >> combination;
        
        char num, suit;
        num = combination[0];
        suit = combination[1];
        
        if (suit == b) {
            sum += scores[num][0];
        }
        else {
            sum += scores[num][1];
        }
    }
    
    std::cout << sum;

    return 0;
}