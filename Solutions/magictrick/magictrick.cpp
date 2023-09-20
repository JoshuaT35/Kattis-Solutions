// https://open.kattis.com/problems/magictrick


// Solution
#include<iostream>

int main () {
    std::string word;
    std::cin >> word;
    
    bool obvious = true;
    for (int i = 0; i < word.size(); i++) {
        int firstIdx = word.find_first_of(word[i]);
        if ((word.find_first_of(word[i], firstIdx+1)) != -1) {
            obvious = false;
            break;
        }
    }

    if (obvious) {
        std::cout << "1";
    }
    else {
        std::cout << "0";
    }
    return 0;
}