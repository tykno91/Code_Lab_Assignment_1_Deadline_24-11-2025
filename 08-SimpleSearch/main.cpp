/*
 * Exercise 8: Simple Search
 * Program that searches for a value in an array
 */

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE] = {12, 45, 7, 23, 67, 89, 34, 56, 90, 15};
    int searchValue;
    bool found = false;
    int position = -1;
    
    // Display the array
    cout << "===== Simple Search Program =====" << endl;
    cout << "\nArray contents: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    // Get search value from user
    cout << "\nEnter a number to search for: ";
    cin >> searchValue;
    
    // Linear search through the array
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] == searchValue) {
            found = true;
            position = i;
            break;
        }
    }
    
    // Display results
    cout << "\n===== Search Results =====" << endl;
    if (found) {
        cout << "Value " << searchValue << " found at index " << position << endl;
        cout << "(Position " << (position + 1) << " in the array)" << endl;
    } else {
        cout << "Value " << searchValue << " not found in the array." << endl;
    }
    
    // Additional feature: Count occurrences
    int count = 0;
    cout << "\nSearching for all occurrences..." << endl;
    cout << "Positions where " << searchValue << " appears: ";
    
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] == searchValue) {
            cout << i << " ";
            count++;
        }
    }
    
    if (count == 0) {
        cout << "None";
    }
    cout << "\nTotal occurrences: " << count << endl;
    
    return 0;
}