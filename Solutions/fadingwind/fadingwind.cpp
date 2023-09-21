// https://open.kattis.com/problems/fadingwind


// Solution
#include<iostream>
#include<cmath>
#include<algorithm>

int main() {
    int h, k, v, s;
    std::cin >> h >> k >> v >> s;
    
    int distance = 0;
    while (h > 0) {
        v += s;
        int vDecrease = std::max(1.0, std::floor(v/10.0));
        v -= vDecrease;
        
        if (v >= k) {h++;}
        else if (v <= 0) {
            h = 0;
            v = 0;
        }
        else {
            h--;
            if (h == 0) {v = 0;}
        }
        if (s != 0) {s--;}
        distance += v;
    }
    std::cout << distance;
    return 0;
}