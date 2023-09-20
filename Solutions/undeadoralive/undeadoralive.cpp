// https://open.kattis.com/problems/undeadoralive


// Solution
#include <iostream>
#include <string>

using namespace std;

int main() {
    std::string line;
    std::getline(cin, line);
    
    size_t smile = line.find(":)");
    size_t frown = line.find(":(");
    
    if (smile != string::npos) {
        if (frown != string::npos) {
            cout << "double agent";
        }
        else {
            cout << "alive";
        }
    }
    else {
        if (frown != string::npos) {
            cout << "undead";
        }
        else {
            cout << "machine";
        }
    }
    return 0;
}