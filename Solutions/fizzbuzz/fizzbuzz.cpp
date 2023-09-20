// https://open.kattis.com/problems/fizzbuzz


// Solution
#include<iostream>

int main() {
    int x, y, n;
    std::cin >> x >> y >> n;

    for (int i = 0; i < n; i++) {
        bool fizzFlag = false,
            buzzFlag = false;
        
        if ((i+1) % x == 0) {fizzFlag = true;}
        if ((i+1) % y == 0) {buzzFlag = true;}
        
        if (fizzFlag && buzzFlag) {
            std::cout << "FizzBuzz" << '\n';
        }
        else if (fizzFlag) {
            std::cout << "Fizz" << '\n';
        }
        else if (buzzFlag) {
            std::cout << "Buzz" << '\n';
        }
        else {
            std::cout << (i+1) << '\n';;
        }
    }
    return 0;
}