// https://open.kattis.com/problems/pokechat


// Solution
#include<iostream>

int main() {
    std::string s;
    std::getline(std::cin, s);
    
    std::string idCode;
    std::cin >> idCode;
    
    std::string decoded = "";

    for (int idx = 0; idx < idCode.length(); idx+=3) {
        std::string idStr = idCode.substr(idx, 3);
        decoded += s[std::stoi(idStr) - 1];
    }

    std::cout << decoded;

    return 0;
}