/*
 * Exercise 7: Some Counting
 * Program that demonstrates different counting patterns
 */

#include <iostream>
using namespace std;

int main() {
    cout << "===== Counting Patterns =====" << endl;
    
    // Count up from 0 to 10
    cout << "\nCounting up from 0 to 10:" << endl;
    for (int i = 0; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // Count down from 10 to 0
    cout << "\nCounting down from 10 to 0:" << endl;
    for (int i = 10; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;
    
    // Count up in steps of 2 from 0 to 20
    cout << "\nCounting up in steps of 2 from 0 to 20:" << endl;
    for (int i = 0; i <= 20; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    
    // Count odd numbers from 1 to 19
    cout << "\nOdd numbers from 1 to 19:" << endl;
    for (int i = 1; i < 20; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    
    // Count down in steps of 3 from 30 to 0
    cout << "\nCounting down in steps of 3 from 30 to 0:" << endl;
    for (int i = 30; i >= 0; i -= 3) {
        cout << i << " ";
    }
    cout << endl;
    
    // User-defined counting
    int start, end, step;
    
    cout << "\n===== Custom Counting =====" << endl;
    cout << "Enter starting number: ";
    cin >> start;
    
    cout << "Enter ending number: ";
    cin >> end;
    
    cout << "Enter step value: ";
    cin >> step;
    
    cout << "\nCounting from " << start << " to " << end 
         << " in steps of " << step << ":" << endl;
    
    if (step > 0 && start < end) {
        // Count up
        for (int i = start; i <= end; i += step) {
            cout << i << " ";
        }
    } else if (step < 0 && start > end) {
        // Count down
        for (int i = start; i >= end; i += step) {
            cout << i << " ";
        }
    } else {
        cout << "Invalid parameters for counting.";
    }
    cout << endl;
    
    return 0;
}