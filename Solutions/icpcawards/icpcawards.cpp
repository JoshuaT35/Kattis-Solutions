// https://open.kattis.com/problems/icpcawards


// Solution
#include <iostream>
#include <queue>
#include <utility>

// type definitions
typedef std::pair<std::string, std::string> uniTeam;
typedef std::deque<uniTeam>::iterator dutItr;

// function prototypes
bool findInDeque(std::deque<uniTeam>, std::string);

int main() {
    int all;
    std::cin >> all;

    // FIFO container that holds UniTeam pairs
    std::deque<uniTeam> ranks = {};

    // put the highest ranking team from each school into ranks
    for (int i = 0; i < all; i++) {
        std::string uni, team;
        std::cin >> uni >> team;
        if (findInDeque(ranks, uni) == false) {
            ranks.push_back({uni, team});
        }
    }

    // print the 12 highest ranking teams
    int idx = 0;
    dutItr ranksItr;
    for (ranksItr = ranks.begin(); ranksItr != ranks.end(); ranksItr++) {
        std::cout << ranksItr->first << ' ' << ranksItr->second << std::endl;
        idx++;
        if (idx == 12) {
            break;
        }
    }
    return 0;
}

/*
Arguments:
    - std::deque<uniTeam> ranks
    - std::string key
Returns:
    - true if key exists in ranks
    - false otherwise
*/
bool findInDeque(std::deque<uniTeam> ranks, std::string key) {
    dutItr rItr;
    for (rItr = ranks.begin(); rItr != ranks.end(); rItr++) {
        std::string uni = rItr->first;
        if (key == uni) {return true;}
    }
    return false;
}