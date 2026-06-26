// to create no guessing game
#include <iostream>
using namespace std;

int main()
{
    int secret, guess, attempts = 0;

    cout << "Player 1, enter a secret number between 1 and 100 - ";
    cin >> secret;

    cout << "Player 2, try to guess the number" << endl;

    do
    {
        cout << "Enter your guess - ";
        cin >> guess;
        attempts++;

        if (guess > secret)
        {
            cout << "Too high!" << endl;
        }
        else if (guess < secret)
        {
            cout << "Too low!" << endl;
        }
        else
        {
            cout << "Correct! You guessed it in " << attempts << " attempts." << endl;
        }
    } while (guess != secret);

    return 0;
}
