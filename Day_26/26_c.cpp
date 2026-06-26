// to create ATM simulation
#include <iostream>
using namespace std;

int main()
{
    int pin, choice;
    double balance = 1000.0, amount;

    cout << "Enter your PIN ";
    cin >> pin;

    if (pin != 1234)
    {
        cout << "Invalid PIN, Enter the correct pin and try again." << endl;
        return 0;
    }

    do
    {
        cout << "ATM Menu" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Your balance is " << balance << endl;
            break;
        case 2:
            cout << "Enter the amount to deposit ";
            cin >> amount;
            balance += amount;
            cout << "Deposit successful. Current balance " << balance << endl;
            break;
        case 3:
            cout << "Enter amount to withdraw ";
            cin >> amount;
            if (amount > balance)
            {
                cout << "Insufficient balance" << endl;
            }
            else
            {
                balance -= amount;
                cout << "Withdrawal successful. Current balance " << balance << endl;
            }
            break;
        case 4:
            cout << "Thank you for using ATM" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}
