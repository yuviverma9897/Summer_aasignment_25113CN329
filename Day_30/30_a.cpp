// to create student record system using arrays and strings
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int roll[100];
    string name[100];
    float marks[100];
    int n = 0, choice;

    do
    {
        cout << "\nStudent Record Management System\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter roll number ";
            cin >> roll[n];
            cout << "Enter name ";
            cin >> name[n];
            cout << "Enter marks ";
            cin >> marks[n];
            n++;
            cout << "Student added successfully\n";
        }
        else if (choice == 2)
        {
            cout << "\nAll Students\n";
            for (int i = 0; i < n; i++)
            {
                cout << "Roll: " << roll[i]
                     << " Name: " << name[i]
                     << " Marks: " << marks[i] << endl;
            }
        }
        else if (choice == 3)
        {
            int r;
            cout << "Enter roll number to search ";
            cin >> r;
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (roll[i] == r)
                {
                    cout << "Found -> Roll: " << roll[i]
                         << " Name: " << name[i]
                         << " Marks: " << marks[i] << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Student not found\n";
        }
        else if (choice == 4)
        {
            cout << "Exiting system\n";
        }
        else
        {
            cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}
