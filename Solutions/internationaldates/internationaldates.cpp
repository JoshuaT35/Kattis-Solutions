// https://open.kattis.com/problems/internationaldates


// Solution
#include <iostream>

int main() {
    std::string date;
    std::cin >> date;

    int first = date.find('/');
    int second = date.find('/', first+1);

    int a = stoi(date.substr(0, first));
    int b = stoi(date.substr(first+1, second-(first+1)));

    if (a > 12) {std::cout << "EU";}
    else if (b > 12) {std::cout << "US";}
    else {std::cout << "either";}

    return 0;
}