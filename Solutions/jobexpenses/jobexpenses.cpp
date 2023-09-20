// https://open.kattis.com/problems/jobexpenses


// Solution
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int exp = 0;
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        if (a < 0) {exp -= a;}
    }
    std::cout << exp << std::endl;

    return 0;
}