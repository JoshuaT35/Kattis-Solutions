// https://open.kattis.com/problems/vidsnuningur


// Solution
#include<iostream>

int main() {
    std::string text;
    std::cin >> text;
    
    std::string reversed = "";
    for (int i = text.length()-1; i >= 0; i--) {
        reversed += text[i];
    }
    
    std::cout << reversed;
    return 0;
}