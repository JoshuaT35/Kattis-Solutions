// https://open.kattis.com/problems/digitswap


// Solution
#include <iostream>

int main() {
    std::string num, final;
    std::cin >> num;
    final = "";
    
    for (int i = 0; i < num.size(); i++) {
        final = num[i] + final;
    }
    
    std::cout << std::stoi(final);
    return 0;
}