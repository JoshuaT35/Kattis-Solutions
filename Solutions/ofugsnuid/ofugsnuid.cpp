// https://open.kattis.com/problems/ofugsnuid


// Solution
#include<iostream>
#include<vector>

int main() {
    std::vector<int> numbers;

    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        numbers.insert(numbers.begin(), a);
    }

    for (std::vector<int>::iterator itr = numbers.begin(); itr != numbers.end(); itr++) {
        std::cout << *itr << '\n';
    }
    return 0;
}