// https://open.kattis.com/problems/lastfactorialdigit


// Solution
#include <iostream>

int main() {
    int t;
    std::cin >> t;
    
    int s = 1;
    for (int i = 0; i < t; i++) {
        int a;
        std::cin >> a;
        
        // find factorial of a
        int b = 1;
        for (int j = 0; j < a; j++) {
            b *= (j+1);
        }
        
        // print last digit of b
        std::cout << (b%10) << std::endl;
    }
    return 0;
}