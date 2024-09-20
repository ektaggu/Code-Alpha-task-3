#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed random number generator

    int secretNumber = rand() % 100 + 1; // Generate random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have chosen a number between 1 and 100.\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number in " << attempts << " tries!\n";
            break;
        } else if (guess < secretNumber) {
            cout << "Too low!\n";
        } else {
            cout << "Too high!\n";
        }
    }

    return 0;
}
