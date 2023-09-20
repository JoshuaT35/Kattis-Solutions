// https://open.kattis.com/problems/oddmanout


// Solution
#include <iostream>
#include <unordered_map>
#include <set>

int main() {
    // num of test cases
    int n;
    std::cin >> n;
    
    // for each test case
    for (int i = 0; i < n; i++) {
        // num of guests
        int guests;
        std::cin >> guests;
        
        // key is the ID
        // value is the frequency
        std::unordered_map<int, int> guestCheck;
        // check each guest
        for (int j = 0; j < guests; j++) {
            // get ID
            int guestID;
            std::cin >> guestID;
            
            // check if guestID exists
            // // If ID does not exist, add it
            if (guestCheck.find(guestID) == guestCheck.end()) {
                guestCheck[guestID] = 1;
            }
            // // Else, increase its frequency
            else {
                guestCheck[guestID] += 1;
            }
        }

        // afterwards, check guest list
        // to see who lacks an ID
        std::set<int> singles;
        std::unordered_map<int, int>::iterator gcItr;
        for (gcItr = guestCheck.begin(); gcItr != guestCheck.end(); gcItr++) {
            // check frequency of ID
            int singlesID = gcItr->first;
            int appearance = gcItr->second;
            if (appearance == 1) {
                singles.insert(singlesID);
            }
        }
        
        // print the case number and
        // the singles for each case
        std::cout << "Case #" << i+1 << ": ";
        for (int num : singles) {
            std::cout << num << ' ';
        }
    }

    return 0;
}