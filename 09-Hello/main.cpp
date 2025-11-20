/*
 * Exercise 9: Hello
 * Program demonstrating the use of functions
 */

#include <iostream>
#include <string>
using namespace std;

// Function declarations
void greetUser();
void greetUserByName(string name);
string getGreeting(string name, string timeOfDay);
void displayGreeting(string greeting);

int main() {
    cout << "===== Hello Program =====" << endl;
    
    // Call simple greeting function
    greetUser();
    
    // Get user's name
    string userName;
    cout << "\nWhat is your name? ";
    getline(cin, userName);
    
    // Call function with parameter
    greetUserByName(userName);
    
    // Get time of day
    string timeOfDay;
    cout << "\nWhat time of day is it? (morning/afternoon/evening): ";
    getline(cin, timeOfDay);
    
    // Use function that returns a value
    string customGreeting = getGreeting(userName, timeOfDay);
    displayGreeting(customGreeting);
    
    return 0;
}

// Function definitions

// Simple function with no parameters
void greetUser() {
    cout << "\nHello there!" << endl;
    cout << "Welcome to the program!" << endl;
}

// Function with one parameter
void greetUserByName(string name) {
    cout << "\nHello, " << name << "!" << endl;
    cout << "It's nice to meet you!" << endl;
}

// Function with parameters that returns a value
string getGreeting(string name, string timeOfDay) {
    string greeting;
    
    if (timeOfDay == "morning") {
        greeting = "Good morning, " + name + "! Have a great day ahead!";
    } else if (timeOfDay == "afternoon") {
        greeting = "Good afternoon, " + name + "! Hope you're having a productive day!";
    } else if (timeOfDay == "evening") {
        greeting = "Good evening, " + name + "! Hope you had a wonderful day!";
    } else {
        greeting = "Hello, " + name + "! Have a fantastic time!";
    }
    
    return greeting;
}

// Function that displays a message
void displayGreeting(string greeting) {
    cout << "\n================================" << endl;
    cout << greeting << endl;
    cout << "================================" << endl;
}