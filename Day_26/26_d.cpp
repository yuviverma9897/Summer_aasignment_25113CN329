//to create quiz application
#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 0;
    string answer;

    cout << "Welcome to the Quiz!" << endl;

    cout << "Statement 1: Choose the correct option" << endl;
    cout << "a) Option A\nb) Option B\nc) Option C\nd) Option D" << endl;
    cout << "Enter your answer ";
    cin >> answer;
    if (answer == "a") score++;

    cout << "Statement 2: Choose the correct option" << endl;
    cout << "a) Option A\nb) Option B\nc) Option C\nd) Option D" << endl;
    cout << "Enter your answer ";
    cin >> answer;
    if (answer == "b") score++;

    cout << "Statement 3: Choose the correct option" << endl;
    cout << "a) Option A\nb) Option B\nc) Option C\nd) Option D" << endl;
    cout << "Enter your answer ";
    cin >> answer;
    if (answer == "c") score++;

    cout << "Your final score is " << score << " out of 3" << endl;

    return 0;
}
