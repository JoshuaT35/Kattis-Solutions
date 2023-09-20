// https://open.kattis.com/problems/everywhere


// Solution
#include <iostream>
#include <unordered_set>

int main() {
    int T;
    std::cin >> T;
    
    int c;
    std::string city;
    std::unordered_set<std::string> citySet;
    for (int i = 0; i < T; i++) {
        std::cin >> c;
        for (int j = 0; j < c; j++) {
            std::cin >> city;
            citySet.insert(city);
        }
        std::cout << citySet.size() << '\n';
        citySet.clear();
    }
    return 0;
}