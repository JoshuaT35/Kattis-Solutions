// https://open.kattis.com/problems/knotknowledge


// Solution
#include <iostream>
#include <unordered_set>

int main() {
    int n;
    std::cin >> n;

    std::unordered_set<int> knots;
    for (int i = 0; i < n; i++) {
        int knot;
        std::cin >> knot;
        knots.insert(knot);
    }

    for (int i = 0; i < (n-1); i++) {
        int notL;
        std::cin >> notL;
        knots.erase(notL);
    }

    std::unordered_set<int>::iterator itr;
    for (itr = knots.begin(); itr != knots.end(); itr++) {
        std::cout << *itr << std::endl;
    }

    return 0;
}