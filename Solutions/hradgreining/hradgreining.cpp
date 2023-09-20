// https://open.kattis.com/problems/hradgreining


// Solution
#include<iostream>

int main() {
    std::string dna;
    std::cin >> dna;
    int a = dna.find("COV");
    if (a != std::string::npos) {
        std::cout << "Veikur!";
    }
    else {
        std::cout << "Ekki veikur!";
    }
    return 0;
}