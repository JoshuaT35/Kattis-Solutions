// https://open.kattis.com/problems/goombastacks


// Solution
#include<iostream>

int main() {
    int n;
    std::cin >> n;
    
    bool possible = true;
    int previous = 0;
    for (int i = 0; i < n; i++) {
        int g, b;
        std::cin >> g >> b;
        if (previous+g >= b) {
            previous += g;
        }
        else {
            possible = false;
            break;
        }
    }
    
    if (possible) {
        std::cout << "possible";
    }
    else {
        std::cout << "impossible";
    }
    return 0;
}