// to create marksheet generation system
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int roll, subjects;
    string name;

    cout << "Enter student roll number ";
    cin >> roll;
    cout << "Enter student name ";
    cin >> name;
    cout << "Enter number of subjects ";
    cin >> subjects;

    int marks[50];
    int total = 0;

    for (int i = 0; i < subjects; i++)
    {
        cout << "Enter marks for subject " << i + 1 << " ";
        cin >> marks[i];
        total += marks[i];
    }

    float percentage = (float)total / subjects;

    cout << "\n--- Marksheet ---\n";
    cout << "Roll Number: " << roll << endl;
    cout << "Name: " << name << endl;
    cout << "Subjects: " << subjects << endl;
    for (int i = 0; i < subjects; i++)
    {
        cout << "Subject " << i + 1 << ": " << marks[i] << endl;
    }
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 33)
        cout << "Result: Pass" << endl;
    else
        cout << "Result: Fail" << endl;

    return 0;
}
