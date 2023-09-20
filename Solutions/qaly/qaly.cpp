// https://open.kattis.com/problems/qaly


// Solution
#include<iostream>

int main() {
    int n;
    float q, y;
    float sum = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> q >> y;
        sum += q*y;
    }
    std::cout << sum;
    return 0;
}