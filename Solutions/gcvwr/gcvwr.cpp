// https://open.kattis.com/problems/gcvwr


// Solution
#include <iostream>

using namespace std;

int main() {
    int g, t, n, it;
    std::cin >> g >> t >> n;
    g -= t;
    g *= 0.9;
    for (int i = 0; i < n; i++) {
        std::cin >> it;
        g -= it;
    }
    std::cout << g;
    return 0;
}