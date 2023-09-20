// https://open.kattis.com/problems/avion


// Solution
#include <iostream>

using namespace std;

int main() {
    bool caught = false;
    for (int i = 0; i < 5; i++) {
        std::string name;
        std::getline(cin, name);
        
        for (int i = 0; i < name.size(); i++) {
            name[i] = toupper(name[i]);
        }
        
        if (name.find("FBI") != std::string::npos) {
            cout << (i+1) << ' ';
            caught = true;
        }
    }
    
    if (!caught) {
        cout << "HE GOT AWAY!";
    }
    return 0;
}