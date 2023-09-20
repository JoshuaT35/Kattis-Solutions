// https://open.kattis.com/problems/eyeofsauron


// Solution
#include <iostream>

int main() {
    std::string drawing;
    std::cin >> drawing;
    int bar = 0;
    bool eye = false;
    for (int i = 0; i < drawing.size(); i++) {
        if (drawing[i] == '|') {
            if (eye) {
                bar--;
            }
            else {
                bar++;
            }
        }
        else {
            eye = true;
        }
    }
    if (bar) {
        std::cout << "fix";
    }
    else {
        std::cout << "correct";
    }
}