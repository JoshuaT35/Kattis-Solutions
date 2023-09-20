// https://open.kattis.com/problems/heimavinna


// Solution
#include <iostream>

int main() {
    std::string prob;
    std::getline(std::cin, prob);
    
    std::string ls;
    int first, second, commaIdx, dashIdx, problems, idx;
    problems = 0;
    idx = 0;
    
    do {
        commaIdx = prob.find(';', idx);

        if (commaIdx == std::string::npos) {
            ls = prob.substr(idx, prob.size() - idx);
        }
        else {
            ls = prob.substr(idx, commaIdx - idx);
        }
            
        dashIdx = ls.find('-');
        if (dashIdx != std::string::npos) {
            first = stoi(ls.substr(0, dashIdx));
            second = stoi(ls.substr(dashIdx+1, commaIdx-(dashIdx+1)));
            problems += second - first + 1;
        }
        else {
            problems++;
        }

            idx = commaIdx + 1;
    } while (commaIdx != std::string::npos);

    std::cout << problems;
    
    return 0;
}