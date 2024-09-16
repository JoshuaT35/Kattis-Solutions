// https://open.kattis.com/problems/isyavowel

#include<iostream>
#include<string>

int main() {
    std::string inp;
    std::cin >> inp;
    
    std::string vowels_no_y = "aeiou";
    int vowels_no_y_count = 0;
    int vowels_y_count = 0;
    for (int i = 0; i < inp.length(); i++) {
        char letter = inp[i];
        
        if (vowels_no_y.find(letter) != std::string::npos) {
            vowels_no_y_count++;
        }
        
        if (letter == 'y') {
            vowels_y_count++;
        }
    }
    
    std::cout << vowels_no_y_count << ' ' << (vowels_no_y_count+vowels_y_count);
    
    return 0;
}