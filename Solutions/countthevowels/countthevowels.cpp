// https://open.kattis.com/problems/countthevowels


// Solution
#include <iostream>

int main() {
    std::string vowels = "AaEeIiOoUu";
    std::string sentence;
    getline(std::cin, sentence);
    
    int count = 0;
    for (int i = 0; i < sentence.size(); i++) {
        if (vowels.find(sentence[i]) != std::string::npos) {
            count++;
        }
    }
    std::cout << count;
    return 0;
}