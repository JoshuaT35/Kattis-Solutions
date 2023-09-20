// https://open.kattis.com/problems/isithalloween


// Solution
#include <iostream>

int main() {
    std::string month;
    int day;
    std::cin >> month >> day;
    
    if ((month == "OCT" && day == 31) ||
        (month == "DEC" && day == 25)) {
            std::cout << "yup";
        }
    else {
        std::cout  << "nope";
    }
    return 0;
}