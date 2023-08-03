#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int TOTAL_GUESSES = 5;

int main() {

    int secretNumber;
    
    srand(time(0));
    secretNumber = (rand() % 100) + 1;

    int maxRange, minRange, currentGuess, guess, guesses;

    minRange = 1;
    maxRange = 100;

    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;
    
    for (currentGuess = TOTAL_GUESSES; currentGuess > 0; --currentGuess) {
        cout << "Range: [" << minRange << ", " << maxRange << "], Number of guesses left: " << currentGuess << "\nYour guess: ";
        cin >> guess;
        guesses = TOTAL_GUESSES - currentGuess + 1;
        if (guess > secretNumber) {
            maxRange = (guess - 1);
            cout << "Wrong! my number is smaller." << endl;
        }
        if (guess < secretNumber) {
            minRange = (guess + 1);
            cout << "Wrong! my number is bigger." << endl;
        }
        if (guess == secretNumber) {
            cout << "Congrats! You guessed my number in " << (guesses) << " guess(es).";
            currentGuess = 0;
        }
    }

    if (currentGuess == 0 && guess != secretNumber)
        cout << "Out of guesses! My number is " << secretNumber;

    return 0;
}