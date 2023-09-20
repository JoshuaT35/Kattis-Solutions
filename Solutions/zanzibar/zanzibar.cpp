// https://open.kattis.com/problems/zanzibar


// Solution
#include<iostream>

int main() {
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        int before, after;
        int sum = 0;
        
        // get first 2 values
        std::cin >> before >> after;
        
        while (after != 0) {
            if (after > (before*2)) {
                sum += (after - (before*2));
            }
            // go along the list of numbers
            before = after;
            std::cin >> after;
        }
        
        std::cout << sum << '\n';
    }

    return 0;
}