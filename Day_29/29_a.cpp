// to create a menu driven calculator
#include <iostream>
using namespace std;

int main()
{
    double a, b, result;
    int choice;

    do
    {
        cout << "\nMenu Driven Calculator\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Division\n";
        cout << "4. Multiplication\n";
        cout << "5. Exit\n";
        cout << "Enter your choice ";
        cin >> choice;

        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter two numbers" << endl;
            cin >> a >> b;
            if (choice == 1)
            {
                result = a + b;
                cout << "Addition is " << result << endl;
            }
            else if (choice == 2)
            {
                result = a - b;
                cout << "Subtraction is " << result << endl;
            }
            else if (choice == 3)
            {
                if (b != 0)
                {
                    result = a / b;
                    cout << "Division is " << result << endl;
                }
                else
                {
                    cout << "Division not possible." << endl;
                }
            }
            else if (choice == 4)
            {
                result = a * b;
                cout << "Multiplication is " << result << endl;
            }
        }
        else if (choice == 5)
        {
            cout << "Exiting the calculator." << endl;
        }
        else
        {
            cout << "Invalid choice. Enter a valid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}