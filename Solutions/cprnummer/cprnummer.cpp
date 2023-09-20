// https://open.kattis.com/problems/cprnummer


// Solution
#include<iostream>

int main() {
    std::string cpr;
    std::cin >> cpr;

    int values[10] = {4, 3, 2, 7, 6, 5, 4, 3, 2, 1};
    int* valuesPtr = NULL;
    valuesPtr = values;
    int sum = 0;

    for (char ch: cpr) {
        if (ch != '-') {
            int num = ch - '0';
            sum += (*valuesPtr) * num;
            valuesPtr++;
        }
    }

    if (sum%11 == 0) {
        std::cout << 1;
    }
    else {
        std::cout << 0;
    }

    valuesPtr = NULL;

    return 0;
}