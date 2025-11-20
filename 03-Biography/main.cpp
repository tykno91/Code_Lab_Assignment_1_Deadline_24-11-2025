/*
 * Exercise 3: Biography
 * Program that collects and displays user information
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, hometown, hobby;
    int age;
    
    // Collect user information
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // Clear newline from buffer
    
    cout << "Enter your hometown: ";
    getline(cin, hometown);
    
    cout << "Enter your favorite hobby: ";
    getline(cin, hobby);
    
    // Display biography
    cout << "\n===== Your Biography =====" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Hometown: " << hometown << endl;
    cout << "Favorite Hobby: " << hobby << endl;
    cout << "==========================" << endl;
    
    return 0;
}