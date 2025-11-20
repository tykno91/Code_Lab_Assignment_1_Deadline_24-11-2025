/*
 * Exercise 5: Days of the Month
 * Program that determines the number of days in a given month
 */

#include <iostream>
using namespace std;

int main() {
    int month, year;
    int days;
    
    // Get input from user
    cout << "Enter month number (1-12): ";
    cin >> month;
    
    cout << "Enter year: ";
    cin >> year;
    
    // Validate month input
    if (month < 1 || month > 12) {
        cout << "Invalid month! Please enter a number between 1 and 12." << endl;
        return 1;
    }
    
    // Determine number of days using switch statement
    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
            
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            days = 30;
            break;
            
        case 2:  // February
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
            
        default:
            days = 0;
    }
    
    // Display result
    string monthNames[] = {"", "January", "February", "March", "April", "May", 
                          "June", "July", "August", "September", "October", 
                          "November", "December"};
    
    cout << "\n" << monthNames[month] << " " << year << " has " << days << " days." << endl;
    
    return 0;
}