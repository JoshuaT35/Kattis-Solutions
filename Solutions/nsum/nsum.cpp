// https://open.kattis.com/problems/nsum


// Solution
#include<iostream>

int main() {
    int n;
    std::cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        sum += a;
    }
    std::cout << sum;
    return 0;
}