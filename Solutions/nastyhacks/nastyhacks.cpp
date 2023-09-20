// https://open.kattis.com/problems/nastyhacks


// Solution
#include <iostream>

int main() {
    int n, r, e, c;
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cin >> r >> e >> c;
        if (r > (e-c)) {
            std::cout << "do not advertise" << std::endl;
        }
        else if ((e-c) > r) {
            std::cout << "advertise" << std::endl;
        }
        else {
            std::cout << "does not matter" << std::endl;
        }
    }
    return 0;
}