// https://open.kattis.com/problems/bijele


// Solution
#include <iostream>

const int PIECE_NUM = 6;

int main() {
    int pieces[PIECE_NUM];
    int change[PIECE_NUM] = {};
    int standard[PIECE_NUM] = {1, 1, 2, 2, 2, 8};
    
    for (int i = 0; i < PIECE_NUM; i++) {
        std::cin >> pieces[i];
        
        while (pieces[i] != standard[i]) {
            if (pieces[i] > standard[i]) {
                change[i]--;
                pieces[i]--;
            }
            else if (pieces[i] < standard[i]) {
                change[i]++;
                pieces[i]++;
            }
        }
    }
    
    for (int i = 0; i < PIECE_NUM; i++) {
        if (i != (PIECE_NUM-1)) {
            std::cout << change[i] << ' ';
        }
        else {
            std::cout << change[i];
        }
    }
}