// to create bank account system
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int accID[100];
    string accName[100];
    float accBalance[100];
    int n = 0, choice;

    do
    {
        cout << "\nBank Account System\n";
        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Search Account\n";
        cout << "4. Deposit Money\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Exit\n";
        cout << "Enter your choice ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Account ID ";
            cin >> accID[n];
            cout << "Enter Account Holder Name ";
            cin >> accName[n];
            cout << "Enter Initial Balance ";
            cin >> accBalance[n];
            n++;
            cout << "Account created successfully\n";
        }
        else if (choice == 2)
        {
            cout << "\nAll Accounts\n";
            for (int i = 0; i < n; i++)
            {
                cout << "ID: " << accID[i]
                     << " Name: " << accName[i]
                     << " Balance: " << accBalance[i] << endl;
            }
        }
        else if (choice == 3)
        {
            int id;
            cout << "Enter Account ID to search ";
            cin >> id;
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (accID[i] == id)
                {
                    cout << "Found -> ID: " << accID[i]
                         << " Name: " << accName[i]
                         << " Balance: " << accBalance[i] << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Account not found\n";
        }
        else if (choice == 4)
        {
            int id;
            float amount;
            cout << "Enter Account ID to deposit ";
            cin >> id;
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (accID[i] == id)
                {
                    cout << "Enter amount to deposit ";
                    cin >> amount;
                    accBalance[i] += amount;
                    cout << "Deposit successful. New Balance: " << accBalance[i] << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Account not found\n";
        }
        else if (choice == 5)
        {
            int id;
            float amount;
            cout << "Enter Account ID to withdraw ";
            cin >> id;
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (accID[i] == id)
                {
                    cout << "Enter amount to withdraw ";
                    cin >> amount;
                    if (amount > accBalance[i])
                    {
                        cout << "Insufficient balance\n";
                    }
                    else
                    {
                        accBalance[i] -= amount;
                        cout << "Withdrawal successful. New Balance: " << accBalance[i] << endl;
                    }
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Account not found\n";
        }
        else if (choice == 6)
        {
            cout << "Exiting system\n";
        }
        else
        {
            cout << "Invalid choice\n";
        }
    } while (choice != 6);

    return 0;
}
