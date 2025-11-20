/*
 * Exercise 10: Is it even?
 * Program with functions to check if numbers are even or odd
 */

#include <iostream>
using namespace std;

// Function declarations
bool isEven(int number);
bool isOdd(int number);
void checkNumber(int number);
void analyzeArray(int arr[], int size);

int main() {
    int number;
    
    cout << "===== Even or Odd Checker =====" << endl;
    
    // Single number check
    cout << "\nEnter a number to check: ";
    cin >> number;
    
    checkNumber(number);
    
    // Array analysis
    const int SIZE = 10;
    int numbers[SIZE];
    
    cout << "\n===== Array Analysis =====" << endl;
    cout << "Enter 10 numbers:" << endl;
    
    for (int i = 0; i < SIZE; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }
    
    analyzeArray(numbers, SIZE);
    
    // Additional feature: Range check
    int start, end;
    cout << "\n===== Range Analysis =====" << endl;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;
    
    cout << "\nEven numbers in range [" << start << ", " << end << "]: ";
    int evenCount = 0;
    for (int i = start; i <= end; i++) {
        if (isEven(i)) {
            cout << i << " ";
            evenCount++;
        }
    }
    cout << "\nTotal even numbers: " << evenCount << endl;
    
    cout << "\nOdd numbers in range [" << start << ", " << end << "]: ";
    int oddCount = 0;
    for (int i = start; i <= end; i++) {
        if (isOdd(i)) {
            cout << i << " ";
            oddCount++;
        }
    }
    cout << "\nTotal odd numbers: " << oddCount << endl;
    
    return 0;
}

// Function definitions

// Check if a number is even
bool isEven(int number) {
    return (number % 2 == 0);
}

// Check if a number is odd
bool isOdd(int number) {
    return (number % 2 != 0);
}

// Check and display if a number is even or odd
void checkNumber(int number) {
    cout << "\nThe number " << number << " is ";
    
    if (isEven(number)) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }
}

// Analyze an array of numbers
void analyzeArray(int arr[], int size) {
    int evenCount = 0;
    int oddCount = 0;
    
    cout << "\n===== Analysis Results =====" << endl;
    
    // Count even and odd numbers
    for (int i = 0; i < size; i++) {
        if (isEven(arr[i])) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    // Display even numbers
    cout << "\nEven numbers: ";
    for (int i = 0; i < size; i++) {
        if (isEven(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << "\nTotal even numbers: " << evenCount << endl;
    
    // Display odd numbers
    cout << "\nOdd numbers: ";
    for (int i = 0; i < size; i++) {
        if (isOdd(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << "\nTotal odd numbers: " << oddCount << endl;
    
    // Calculate percentages
    double evenPercentage = (static_cast<double>(evenCount) / size) * 100;
    double oddPercentage = (static_cast<double>(oddCount) / size) * 100;
    
    cout << "\nPercentage of even numbers: " << evenPercentage << "%" << endl;
    cout << "Percentage of odd numbers: " << oddPercentage << "%" << endl;
}