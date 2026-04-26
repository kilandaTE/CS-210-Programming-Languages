/*
 * Name: Kilanda Eferobor
 * Project: Project Three - Corner Grocer
 * Date: 4/11/2026
  * Header file for tracking grocery item frequencies.
 */

#pragma once
#include <string>
#include <map>

using namespace std;

class GroceryTracker {
private:
    // Map to store item name and frequency
    map<string, int> itemFrequency;

public:
    // Constructor
    GroceryTracker();

    // File handling
    void loadDataFromFile(string filename);
    void createBackupFile(string filename);

    // Menu options
    int getItemFrequency(string item);
    void printAllFrequencies();
    void printHistogram();

    // Menu display
    void displayMenu();
};