#include <iostream>
#include <iomanip>  // for formatting output
using namespace std;

int main() {
    const int FLOORS = 16;
    const int ROOMS_PER_FLOOR = 6;

    int totalOccupied = 0;
    int occupied;
    
    for (int floor = 1; floor <= FLOORS; floor++) {
        if (floor == 13) {
            continue;  // skip iteration
        }

        cout << "Enter number of occupied apartments on floor " 
             << floor << " (0–6): ";
        cin >> occupied;

        // Input validation loop
        while (occupied < 0 || occupied > ROOMS_PER_FLOOR) {
            cout << "Invalid input. Enter a number between 0 and 6: ";
            cin >> occupied;
        }

        totalOccupied += occupied;
    }

    // Adjust total rooms (skip floor 13)
    int totalRooms = (FLOORS - 1) * ROOMS_PER_FLOOR;
    int unoccupied = totalRooms - totalOccupied;
    double percent = (static_cast<double>(totalOccupied) / totalRooms) * 100.0;

    cout << fixed << setprecision(2);
    cout << "\n--- Apartment Building Summary ---\n";
    cout << "Total rooms: " << totalRooms << endl;
    cout << "Occupied rooms: " << totalOccupied << endl;
    cout << "Unoccupied rooms: " << unoccupied << endl;
    cout << "Percent occupied: " << percent << "%" << endl;

    return 0;
}
