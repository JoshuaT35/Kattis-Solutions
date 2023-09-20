// https://open.kattis.com/problems/jumbojavelin


// Solution
#include<iostream>

int main() {
    int n, sum, count;
    sum = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        sum += a-1;
        if (i==1) {
            sum++;
        } 
    }
    std::cout << sum;
    
    return 0;
}