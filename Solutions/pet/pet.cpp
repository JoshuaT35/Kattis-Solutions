// https://open.kattis.com/problems/pet


// Solution
#include<iostream>

int main() {
    int winNum = 0,
        winPoints = 0;
    for (int i = 0; i < 5; i++) {
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;
        
        int sum = a + b + c + d;
        
        if (sum > winPoints) {
            winPoints = sum;
            winNum = i+1;
        }
    }
    
    std::cout << winNum << ' ' << winPoints;

    return 0;
}