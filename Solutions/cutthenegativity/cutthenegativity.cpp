// https://open.kattis.com/problems/cutthenegativity


// Solution
#include<iostream>

int main() {
    int n;
    std::cin >> n;

    // put costs into a matrix
    int flights[n][n];
    int directFlights = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cost;
            std::cin >> cost;
            flights[i][j] = cost;

            // count number of flights
            if (cost != -1) {
                directFlights++;
            }
        }
    }

    // print num of flights
    std::cout << directFlights << '\n';
    // print each flight
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (flights[i][j] != -1) {
                std::cout << i+1 << ' ' << j+1 << ' ' << flights[i][j];
                if (i!=n-1 || j!=n-1) {
                    std::cout << '\n';
                }
            }
        }
    }

    return 0;
}