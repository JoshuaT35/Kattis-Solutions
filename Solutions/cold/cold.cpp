// https://open.kattis.com/problems/cold


// Solution
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        if (temp < 0) {count++;}
    }
    std::cout << count;
    return 0;
}