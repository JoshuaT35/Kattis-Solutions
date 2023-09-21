// https://open.kattis.com/problems/classfieldtrip


// Solution
#include<iostream>

int main() {
    std::string ann, ben;
    std::string combined = "";
    std::cin >> ann >> ben;

    int i = 0,
        j = 0;
    
    // do until we reach one end of the list
    while (i < ann.length() && j < ben.length()) {
        if (ann[i] <= ben[j]) {
            combined += ann[i];
            i++;
        }
        else {
            combined += ben[j];
            j++;
        }
    }
    
    // go through remaining elements of other list
    while (i < ann.length()) {
        combined += ann[i];
        i++;
    }
    while (j < ben.length()) {
        combined += ben[j];
        j++;
    }
    
    std::cout << combined;

    return 0;
}