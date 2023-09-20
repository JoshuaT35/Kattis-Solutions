// https://open.kattis.com/problems/findingana


// Solution
#include<iostream>

int main() {
    std::string word;
    std::cin >> word;
    int aIdx = word.find_first_of('a');
    std::string suffix = word.substr(aIdx, word.size()-aIdx);
    std::cout << suffix;
    return 0;
}