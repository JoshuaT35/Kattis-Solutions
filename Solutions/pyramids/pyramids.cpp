// https://open.kattis.com/problems/pyramids


// Solution
#include <iostream>

int main() {
    int blocks;
    std::cin >> blocks;
    
    int height = 0;
    int length = 1;
    bool flag = true;
    while (flag) {
        blocks -= length*length;
        if (blocks >= 0) {
            height++;
        }
        else {
            flag = false;
        }
        length += 2;
    }
    std::cout << height;
    return 0;
}