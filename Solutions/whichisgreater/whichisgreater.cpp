// https://open.kattis.com/problems/whichisgreater


// Solution
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << 1;
    }
    else {
        cout << 0;
    }
}