// https://open.kattis.com/problems/oddities


// Solution
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        if (a%2 == 0) {
            std::cout << a << " is even\n";
        }
        else {
            std::cout << a << " is odd\n";
        }
    }
    
    return 0;
}