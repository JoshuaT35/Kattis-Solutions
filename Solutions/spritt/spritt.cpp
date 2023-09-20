// https://open.kattis.com/problems/spritt


// Solution
#include<iostream>

int main() {
    int c, b;
    std::cin >> c >> b;
    
    for (int i = 0; i < c; i++) {
        int n;
        std::cin >> n;
        b -= n;
    }
    
    if (b >= 0) {
        std::cout << "Jebb";
    }
    else {
        std::cout << "Neibb";
    }

    return 0;
}