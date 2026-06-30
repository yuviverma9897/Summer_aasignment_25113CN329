//to create mini library system
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int bookID[100];
    string bookTitle[100];
    string bookAuthor[100];
    int n = 0, choice;

    do
    {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Book ID ";
            cin >> bookID[n];
            cout << "Enter Book Title (single word) ";
            cin >> bookTitle[n];
            cout << "Enter Book Author (single word) ";
            cin >> bookAuthor[n];
            n++;
            cout << "Book added successfully\n";
        }
        else if (choice == 2)
        {
            cout << "\nAll Books\n";
            for (int i = 0; i < n; i++)
            {
                cout << "ID: " << bookID[i]
                     << " Title: " << bookTitle[i]
                     << " Author: " << bookAuthor[i] << endl;
            }
        }
        else if (choice == 3)
        {
            int id;
            cout << "Enter Book ID to search ";
            cin >> id;
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (bookID[i] == id)
                {
                    cout << "Found -> ID: " << bookID[i]
                         << " Title: " << bookTitle[i]
                         << " Author: " << bookAuthor[i] << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Book not found\n";
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
