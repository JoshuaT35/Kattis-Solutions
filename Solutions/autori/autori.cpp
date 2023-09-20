// https://open.kattis.com/problems/autori


// Solution
#include<iostream>

int main() {
    std::string longVersion;
    std::cin >> longVersion;
    
    std::string shortVersion = "";
    for (int i = 0; i < longVersion.length(); i++) {
        char a = longVersion[i];
        if (i == 0) {
            shortVersion += longVersion[i];
        }
        if (a == '-') {
            shortVersion += longVersion[i+1];
        }
    }
    std::cout << shortVersion;
    return 0;
}