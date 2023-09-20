// https://open.kattis.com/problems/fyi


// Solution
#include<iostream>

int main() {
    std::string phoneNum;
    std::cin >> phoneNum;
    std::string prefix = phoneNum.substr(0, 3);
    if (prefix == "555") {
        std::cout << "1";
    }
    else {
        std::cout << "0";
    }
    
    return 0;
}