// https://open.kattis.com/problems/monopol


// Solution
#include <iostream>
#include <unordered_map>

int main() {
    // map of dice probability
    // key is the sum of two dice rolls
    // value is the frequency
    // of the sum appearing in all
    // posibilities.
    std::unordered_map<int, int> diceProb = {
        {2, 1},
        {3, 2},
        {4, 3},
        {5, 4},
        {6, 5},
        {7, 6},
        {8, 5},
        {9, 4},
        {10, 3},
        {11, 2},
        {12, 1}
    };
    
    //
    int avoidHotel = 0;
    double totalPossibilities = 36.0;
    

    // get the number of hotels
    int n;
    std::cin >> n;
    
    // get hotel distances
    for (int i = 0; i < n; i++) {
        int hotelDist;
        std::cin >> hotelDist;
        
        // get the probability this number will
        // be rolled using 2-sided dice
        if (diceProb.find(hotelDist) != diceProb.end()) {
            avoidHotel += diceProb[hotelDist];
        }
    }
    
    //
    double avoidHotelDouble = static_cast<double>(avoidHotel);
    std::cout << avoidHotelDouble/totalPossibilities;
    
    return 0;
}