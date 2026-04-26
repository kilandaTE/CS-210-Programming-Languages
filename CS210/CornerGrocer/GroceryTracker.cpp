/*
 * Name: Kilanda Eferobor
 * Project: Project Three - Corner Grocer
 * Date: 4/20/2026
 */

#include "GroceryTracker.h"
#include <iostream>
#include <fstream>

using namespace std;

// Constructor
GroceryTracker::GroceryTracker() {
}

// Load grocery data from input file
void GroceryTracker::loadDataFromFile(string filename) {
    ifstream inputFile;
    string itemName;

    // Open the input file
    inputFile.open(filename);

    // Check if the file opened correctly
    if (!inputFile.is_open()) {
        cout << "Error opening file." << endl;
        return;
    }

    // Read each item and count frequency
    while (inputFile >> itemName) {
        itemFrequency[itemName]++;
    }

    inputFile.close();

    // Debug confirmation
    cout << "Data loaded successfully." << endl;
    cout << "Number of unique items: " << itemFrequency.size() << endl;
}

// Create backup file with frequencies
void GroceryTracker::createBackupFile(string filename) {
    ofstream outputFile;

    // Open the backup file
    outputFile.open(filename);

    // Check if the file opened correctly
    if (!outputFile.is_open()) {
        cout << "Error creating backup file." << endl;
        return;
    }

    // Write data to file
    for (const auto& pair : itemFrequency) {
        outputFile << pair.first << " " << pair.second << endl;
    }

    outputFile.close();

    cout << "Backup file created successfully." << endl;
}

// Return frequency of a specific item
int GroceryTracker::getItemFrequency(string item) {
    if (itemFrequency.find(item) != itemFrequency.end()) {
        return itemFrequency[item];
    }
    return 0;
}

// Print all items with their frequencies
void GroceryTracker::printAllFrequencies() {
    for (const auto& pair : itemFrequency) {
        cout << pair.first << " " << pair.second << endl;
    }
}

// Print histogram of item frequencies
void GroceryTracker::printHistogram() {
    for (const auto& pair : itemFrequency) {
        cout << pair.first << " ";

        for (int i = 0; i < pair.second; i++) {
            cout << "*";
        }

        cout << endl;
    }
}

// Display menu options
void GroceryTracker::displayMenu() {
    cout << endl;
    cout << "1. Search for an item" << endl;
    cout << "2. Print all item frequencies" << endl;
    cout << "3. Print histogram" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}
