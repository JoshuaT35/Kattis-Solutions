// https://open.kattis.com/problems/heartrate


// Solution
#include<iostream>
#include <cmath>


double roundToDecimalPlaces(double, int);


int main() {
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        double b, p, BPM, minABPM, maxABPM, errorMargin;
        std::cin >> b >> p;

        BPM = roundToDecimalPlaces(60*b / p, 4);
        // use 60/t, where t = p
        errorMargin = 60/p;
        minABPM = roundToDecimalPlaces(BPM - errorMargin, 4);
        maxABPM = roundToDecimalPlaces(BPM + errorMargin, 4);
        
        std::cout << minABPM << ' ' << BPM << ' ' << maxABPM << '\n';
    }

    return 0;
}


double roundToDecimalPlaces(double value, int decimalPlaces) {
    double multiplier = std::pow(10, decimalPlaces);
    return std::round(value * multiplier) / multiplier;
}