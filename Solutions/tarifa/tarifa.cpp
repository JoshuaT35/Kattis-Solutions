// https://open.kattis.com/problems/tarifa


// Solution
#include<iostream>

int main() {
    int x, n;
    std::cin >> x >> n;
    
    int sum = x*n;
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        sum -= a;
    }
    
    std::cout << (sum+x); 
    return 0;
}