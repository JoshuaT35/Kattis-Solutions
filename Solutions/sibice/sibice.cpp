// https://open.kattis.com/problems/sibice


// Solution
#include <iostream>
#include <cmath>

int main() {
    double n, w, h;

    std::cin >> n >> w >> h;
    for (int i = 0; i < n; i++) {
        double l;
        std::cin >> l;

        if (l <= pow(pow(w, 2) + pow(h, 2), 0.5)) {
            std::cout << "DA";
        }
        else {
            std::cout << "NE";
        }
        std::cout << '\n';
    }
    return 0;
}