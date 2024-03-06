#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Guessing Game!" << endl;

    do {
        cout << "Enter your guess (between 1 and 100): ";
        cin >> guess;
        attempts++;
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
