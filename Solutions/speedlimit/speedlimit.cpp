// https://open.kattis.com/problems/speedlimit


// Solution
#include <iostream>

using namespace std;

int main() {
    int seta;
    do {
        cin >> seta;
        if (seta != -1) {
            int speed, atime, lastTime, sum;
            lastTime = 0;
            sum = 0;
            for (int i = 0; i < seta; i++) {
                cin >> speed >> atime;
                sum += speed*(atime-lastTime);
                lastTime = atime;
            }
            cout << sum << " miles" << endl;
        }
    } while (seta != -1);
    return 0;
}