/*
Name:Mwangi Samuel
Reg No.:CT100/G/26145/25
Description:3D Array Multiple Branches
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    // Seed for random number generation
    srand(time(0));

    // Assign random occupancy: 1 = occupied, 0 = vacant
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;

                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    // Display total occupied rooms across all branches
    printf("Total occupied rooms in all branches: %d\n", totalOccupied);

    return 0;
}
