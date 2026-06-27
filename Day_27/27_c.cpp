// to create salary management system
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int empID[100];
    string empName[100];
    float empSalary[100];
    int n = 0, choice;

    do
    {
        cout << "\nSalary Management System\n";
        cout << "1. Add Employee Salary\n";
        cout << "2. Display Salaries\n";
        cout << "3. Search Salary by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Employee ID ";
            cin >> empID[n];
            cout << "Enter Employee Name ";
            cin >> empName[n];
            cout << "Enter Employee Salary ";
            cin >> empSalary[n];
            n++;
            cout << "Record added successfully\n";
        }
        else if (choice == 2)
        {
            cout << "\nAll Employee Salaries\n";
            for (int i = 0; i < n; i++)
            {
                cout << "ID: " << empID[i]
                     << " Name: " << empName[i]
                     << " Salary: " << empSalary[i] << endl;
            }
        }
        else if (choice == 3)
        {
            int id;
            cout << "Enter Employee ID to search ";
            cin >> id;
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (empID[i] == id)
                {
                    cout << "Found -> ID: " << empID[i]
                         << " Name: " << empName[i]
                         << " Salary: " << empSalary[i] << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Employee not found\n";
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
