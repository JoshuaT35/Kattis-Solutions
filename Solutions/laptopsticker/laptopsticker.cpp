// https://open.kattis.com/problems/laptopsticker


// Solution
#include <iostream>

int main() {
    const int SPACE = 1;
    int wc, hc, ws, hs;
    std::cin >> wc >> hc >> ws >> hs;

    if ((ws <= (wc - SPACE*2)) && (hs <= (hc - SPACE*2))) {
        std::cout << '1';
    }
    else {
        std::cout << '0';
    }

    return 0;
}