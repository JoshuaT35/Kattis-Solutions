// https://open.kattis.com/problems/detaileddifferences


// Solution
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::string first, second, result;
        cin >> first >> second;
        result = "";
        
        for (int j = 0; j < first.size(); j++) {
            if (first[j] != second[j]) {
                result += "*";
            }
            else {
                result += ".";
            }
        }
        
        cout << first << endl << second << endl << result << endl;
    }
    return 0;
}