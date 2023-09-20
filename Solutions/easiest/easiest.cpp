// https://open.kattis.com/problems/easiest


// Solution
#include <iostream>

using namespace std;

int sumDigits(int);

int main() {
    while (true) {
        // get value of n
        // break out of loop if n is 0
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        
        // search through all numbers starting
        // from 11
        int nSum, base;
        nSum = sumDigits(n);
        base = 11;
        bool flag = false;
        
        while (!flag) {
            if (sumDigits(base*n) != nSum) {
                base++;
            }
            else {
                cout << base << endl;
                flag = true;
            }
        }
    }
    return 0;
}

// returns the sum of an integers' digits
int sumDigits(int a) {
    int sum = 0;
    while (a != 0) {
        int digit = a%10;
        sum += digit;
        a /= 10;
    }
    return sum;
}