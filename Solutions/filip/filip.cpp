// https://open.kattis.com/problems/filip


// Solution
#include<iostream>
#include<cmath>

int reverseAndInt(std::string);

int main() {
    std::string wordOne;
    std::string wordTwo;
    std::cin >> wordOne >> wordTwo;
    
    int one = reverseAndInt(wordOne);
    int two = reverseAndInt(wordTwo);

    if (one > two) {
        std::cout << one;
    }
    else {
        std::cout << two;
    }

    return 0;
}

int reverseAndInt(std::string word) {
    int newNum = 0;
    for (int i = 0; i < word.size(); i++) {
        newNum += (int(word[i]) - 48) * pow(10, i);
    }

    return newNum;
}