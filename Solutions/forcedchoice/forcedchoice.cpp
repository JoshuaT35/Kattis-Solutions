// https://open.kattis.com/problems/forcedchoice


// Solution
#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int n, p, s;
    cin >> n >> p >> s;
    
    for (int i = 0; i < s; i++) {
        int m;
        cin >> m;
        std::unordered_set<int> chosen;
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            chosen.insert(a);
        }
        
        if (chosen.find(p) == chosen.end()) {
            cout << "REMOVE" << endl;
        }
        else {
            cout << "KEEP" << endl;
        }
    }
    return 0;
}