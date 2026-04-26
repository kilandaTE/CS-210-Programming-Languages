/*
 * Name: Kilanda Eferobor
 * Project: Project Three - Corner Grocer
 * Date: 4/20/2026
 */

#include <iostream>
#include <limits>
#include "GroceryTracker.h"

using namespace std;

int main() {
    GroceryTracker tracker;
    int choice;
    string itemName;

    // Load grocery data from the input file
    tracker.loadDataFromFile("x64\\Debug\\CS210_Project_Three_Input_File.txt");

    // Create backup file with item frequencies
    tracker.createBackupFile("frequency.dat");

    do {
        tracker.displayMenu();

        // Validate menu input
        while (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number from 1 to 4: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (choice == 1) {
            cout << "Enter the item name: ";
            cin >> itemName;
            cout << itemName << " was purchased "
                << tracker.getItemFrequency(itemName) << " time(s)." << endl;
        }
        else if (choice == 2) {
            tracker.printAllFrequencies();
        }
        else if (choice == 3) {
            tracker.printHistogram();
        }
        else if (choice == 4) {
            cout << "Exiting program..." << endl;
        }
        else {
            cout << "Invalid option. Please choose 1, 2, 3, or 4." << endl;
        }

    } while (choice != 4);

    return 0;
}
