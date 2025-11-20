/*
 * Exercise 4: Primitive Quiz
 * A simple quiz program with multiple choice questions
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 0;
    int answer;
    
    cout << "===== Welcome to the Quiz! =====" << endl;
    cout << "Answer the following questions:\n" << endl;
    
    // Question 1
    cout << "Question 1: What is the capital of France?" << endl;
    cout << "1. London" << endl;
    cout << "2. Berlin" << endl;
    cout << "3. Paris" << endl;
    cout << "4. Madrid" << endl;
    cout << "Your answer (1-4): ";
    cin >> answer;
    
    if (answer == 3) {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect. The correct answer is Paris." << endl;
    }
    cout << endl;
    
    // Question 2
    cout << "Question 2: What is 5 + 7?" << endl;
    cout << "1. 10" << endl;
    cout << "2. 12" << endl;
    cout << "3. 13" << endl;
    cout << "4. 15" << endl;
    cout << "Your answer (1-4): ";
    cin >> answer;
    
    if (answer == 2) {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect. The correct answer is 12." << endl;
    }
    cout << endl;
    
    // Question 3
    cout << "Question 3: Which planet is known as the Red Planet?" << endl;
    cout << "1. Venus" << endl;
    cout << "2. Mars" << endl;
    cout << "3. Jupiter" << endl;
    cout << "4. Saturn" << endl;
    cout << "Your answer (1-4): ";
    cin >> answer;
    
    if (answer == 2) {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect. The correct answer is Mars." << endl;
    }
    cout << endl;
    
    // Question 4
    cout << "Question 4: What is the largest ocean on Earth?" << endl;
    cout << "1. Atlantic Ocean" << endl;
    cout << "2. Indian Ocean" << endl;
    cout << "3. Arctic Ocean" << endl;
    cout << "4. Pacific Ocean" << endl;
    cout << "Your answer (1-4): ";
    cin >> answer;
    
    if (answer == 4) {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect. The correct answer is Pacific Ocean." << endl;
    }
    cout << endl;
    
    // Question 5
    cout << "Question 5: Who wrote 'Romeo and Juliet'?" << endl;
    cout << "1. Charles Dickens" << endl;
    cout << "2. William Shakespeare" << endl;
    cout << "3. Jane Austen" << endl;
    cout << "4. Mark Twain" << endl;
    cout << "Your answer (1-4): ";
    cin >> answer;
    
    if (answer == 2) {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect. The correct answer is William Shakespeare." << endl;
    }
    cout << endl;
    
    // Display final score
    cout << "==============================" << endl;
    cout << "Quiz Complete!" << endl;
    cout << "Your final score: " << score << " out of 5" << endl;
    
    if (score == 5) {
        cout << "Perfect score! Excellent work!" << endl;
    } else if (score >= 3) {
        cout << "Good job!" << endl;
    } else {
        cout << "Keep practicing!" << endl;
    }
    
    return 0;
}