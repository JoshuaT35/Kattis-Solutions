// https://open.kattis.com/problems/cudoviste


// Solution
#include<iostream>

void checkType(char *ptr, int& buildings, int& cars) {
    char obj = *ptr;

    if (obj == '#') {
        buildings++;
    }
    else if (obj == 'X') {
        cars++;
    }
}

int main() {
    int r = 0;
    int c = 0;
    std::cin >> r >> c;

    char parkingLot[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            std::cin >> parkingLot[i][j];
        }
    }

    int carsSquashPark[5] = {};

    // pointers to each 2x2 possibility
    // on the map
    char *topLeft = NULL,
        *topRight = NULL,
        *botLeft = NULL,
        *botRight = NULL;

    for (int i = 0; i < r-1; i++) {
        for (int j = 0; j < c-1; j++) {
            // set variables
            int buildings = 0;
            int cars = 0;

            // set pointers
            topLeft = &parkingLot[i][j];
            topRight = &parkingLot[i][j+1];
            botLeft = &parkingLot[i+1][j];
            botRight = &parkingLot[i+1][j+1];

            
            // count the types of objects in the parking lot
            checkType(topLeft, buildings, cars);
            checkType(topRight, buildings, cars);
            checkType(botLeft, buildings, cars);
            checkType(botRight, buildings, cars);
        
            // check what the car affects
            if (buildings > 0) {
                continue;
            }
            else if (cars == 0) {
                carsSquashPark[0]++;
            }
            else if (cars == 1) {
                carsSquashPark[1]++;
            }
            else if (cars == 2) {
                carsSquashPark[2]++;
            }
            else if (cars == 3) {
                carsSquashPark[3]++;
            }
            else if (cars == 4) {
                carsSquashPark[4]++;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        std::cout << carsSquashPark[i] << '\n';
    }

    return 0;
}