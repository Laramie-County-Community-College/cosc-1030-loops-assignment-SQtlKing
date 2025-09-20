#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
using namespace std;

int main() {
    srand(time(0));  // seed random number generator
    int randomNumber = rand() % 100 + 1;  // random number between 1–100
    int guess;
    int count = 0;

    cout << "I have chosen a number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        count++;

        if (guess > randomNumber) {
            cout << "Too high, try again.\n";
        } else if (guess < randomNumber) {
            cout << "Too low, try again.\n";
        } else {
            cout << "Correct! The number was " << randomNumber << ".\n";
            cout << "You guessed it in " << count << " tries.\n";
        }

    } while (guess != randomNumber);

    return 0;
}
