// https://open.kattis.com/problems/dicecup


// Solution
#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int diagonals = abs(n-m) + 1;
    
    int lower = m;
    if (n < m) {
        lower = n;
    }
    for (int i = 0; i < diagonals; i++) {
        cout << lower+i+1 << endl;
    }
    return 0;
}