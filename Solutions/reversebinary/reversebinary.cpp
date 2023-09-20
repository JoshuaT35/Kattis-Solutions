// https://open.kattis.com/problems/reversebinary


// Solution
#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::string reverseStr = "";
    while (n != 0) {
        int a = n%2;
        if (a == 0) {
            reverseStr += "0";
        }
        else {
            reverseStr += "1";
        }
        n /= 2;
    }
    
    double m = 0;
    for (int i = 0; i < reverseStr.size(); i++) {
        if (reverseStr[i] == '1') {
            m += pow(2.0, reverseStr.size()-i-1);
        }
    }
    std::cout << static_cast<int>(m);
}