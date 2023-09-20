// https://open.kattis.com/problems/fiftyshades


// Solution
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    int count = 0;
    std::string name;
    for (int i = 0; i < n; i++) {
        std::cin >> name;
        for (int j = 0; j < name.size(); j++) {
            name[j] = (char) tolower(name[j]);
        }

        if (name.find("pink") != std::string::npos ||
            name.find("rose") != std::string::npos) {
                count++;
            }
    }
    if (count != 0) {
        std::cout << count;
    }
    else {
        std::cout << "I must watch Star Wars with my daughter";
    }

    return 0;
}