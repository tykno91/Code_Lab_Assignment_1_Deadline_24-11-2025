/*
 * Exercise 6: Brute Force Attack
 * Password guessing program with limited attempts
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    const string CORRECT_PASSWORD = "secure123";
    const int MAX_ATTEMPTS = 5;
    string userPassword;
    int attempts = 0;
    bool accessGranted = false;
    
    cout << "===== Security System =====" << endl;
    cout << "You have " << MAX_ATTEMPTS << " attempts to enter the correct password.\n" << endl;
    
    // Loop until correct password or max attempts reached
    while (attempts < MAX_ATTEMPTS && !accessGranted) {
        cout << "Attempt " << (attempts + 1) << " of " << MAX_ATTEMPTS << endl;
        cout << "Enter password: ";
        cin >> userPassword;
        
        if (userPassword == CORRECT_PASSWORD) {
            accessGranted = true;
            cout << "\n*** Access Granted! ***" << endl;
            cout << "Welcome to the system!" << endl;
        } else {
            attempts++;
            if (attempts < MAX_ATTEMPTS) {
                cout << "Incorrect password. " << (MAX_ATTEMPTS - attempts) 
                     << " attempt(s) remaining.\n" << endl;
            }
        }
    }
    
    // If max attempts reached without success
    if (!accessGranted) {
        cout << "\n*** Access Denied! ***" << endl;
        cout << "Maximum number of attempts reached." << endl;
        cout << "System locked. Please contact administrator." << endl;
    }
    
    return 0;
}