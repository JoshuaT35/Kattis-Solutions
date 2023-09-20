// https://open.kattis.com/problems/apaxiaaans


// Solution
#include <iostream>

int main() {
    std::string name;
    std::cin >> name;
    
    std::string newName = "";
    for (int i = 0; i < name.size(); i++) {
        if (i == 0) {
            newName += name[i];
        }
        else if (i != 0) {
            if (name[i] != name[i-1]) {
                newName += name[i];
            }
        }
    }
    std::cout << newName;
    return 0;
}