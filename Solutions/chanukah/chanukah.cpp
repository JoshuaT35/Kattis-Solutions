// https://open.kattis.com/problems/chanukah


// Solution
#include <iostream>

int main() {
    int p;
    std::cin >> p;
    
    for (int i = 0; i < p; i++) {
        int data, days, sum;
        std::cin >> data >> days;
        sum = 0;
        for (int j = 0; j < days; j++) {
            sum += (j+2);
        }
        std::cout << data << ' ' << sum << std::endl;
    }
    
    return 0;
}