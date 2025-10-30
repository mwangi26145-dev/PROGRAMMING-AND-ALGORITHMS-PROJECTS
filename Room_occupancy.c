/*
Name:Mwangi Samuel
Reg No.:CT100/G/26145/25
Description:Room Occupancy using 2D Array
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    // Seed random number generator
    srand(time(0));

    // Simulate random occupancy data: 1 = occupied, 0 = vacant
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 0 or 1
        }
    }

    // Display occupancy report per floor
    printf("Room Occupancy Report:\n");
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d | Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}

