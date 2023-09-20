// https://open.kattis.com/problems/nodup


// Solution
#include <iostream>
#include <unordered_map>

int main() {
    std::string sentence;
    getline(std::cin, sentence);
    
    std::unordered_map<std::string, int> wordFreq;
    std::string word = "";
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            wordFreq[word] += 1;
            word = "";
        }
        else if (i == sentence.size()-1) {
            word += sentence[i];
            wordFreq[word] += 1;
        }
        else {
            word += sentence[i];
        }
    }

    bool repeat = false;
    std::unordered_map<std::string, int>::iterator itr;
    for (itr = wordFreq.begin(); itr != wordFreq.end(); itr++) {
        if (itr->second > 1) {
            repeat = true;   
        }
    }

    if (repeat) {
        std::cout << "no";
    }
    else {
        std::cout << "yes";
    }
    
    return 0;
}
