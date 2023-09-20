// https://open.kattis.com/problems/ladder


// Solution
#include <iostream>
#include <cmath>

int main() {
    double h, v;
    std::cin >> h >> v;

    // convert v to radians
    v = v * (3.1415926/180);

    double l = h/sin(v); // sin assumes v is in degrees
    std::cout << ceil(l) << std::endl;

    return 0;
}