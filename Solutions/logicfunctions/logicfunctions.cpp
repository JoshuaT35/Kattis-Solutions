// https://open.kattis.com/problems/logicfunctions


// Solution
#include <iostream>
#include "logicfunctions.h"

// Compute xor
void exclusive(bool x, bool y, bool& ans){
    ans = true;
    if (x == y) {
        ans = false;
    }
}

// Compute implication
void implies(bool x, bool y, bool& ans){
    ans = true;
    if (x == true && y == false) {
        ans = false;
    }
}

// Compute equivalence
void equivalence(bool x, bool y, bool& ans){
    ans = true;
    if (x != y)  {
        ans = false;
    }
}