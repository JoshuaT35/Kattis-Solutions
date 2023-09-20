// https://open.kattis.com/problems/knightpacking


// Solution
#include<iostream>

int main() {
    int n, knightRows;
    std::cin >> n;
    if (n%3 == 1) {
        knightRows = (n/3) + (n%3);
    }
    else {
        knightRows = n/3;
    }

    int available = knightRows*n;

    if (available%2 == 0) {
        std::cout << "second";
    }
    else {
        std::cout << "first";
    }

    return 0;
}