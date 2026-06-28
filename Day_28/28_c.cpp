// to create ticket booking system
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ticketID[100];
    string customerName[100];
    string eventName[100];
    int n = 0, choice;

    do
    {
        cout << "\nTicket Booking System\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Tickets\n";
        cout << "3. Search Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter your choice ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Ticket ID ";
            cin >> ticketID[n];
            cout << "Enter Customer Name (single word) ";
            cin >> customerName[n];
            cout << "Enter Event Name (single word) ";
            cin >> eventName[n];
            n++;
            cout << "Ticket booked successfully\n";
        }
        else if (choice == 2)
        {
            cout << "\nAll Tickets\n";
            for (int i = 0; i < n; i++)
            {
                cout << "Ticket ID: " << ticketID[i]
                     << " Customer: " << customerName[i]
                     << " Event: " << eventName[i] << endl;
            }
        }
        else if (choice == 3)
        {
            int id;
            cout << "Enter Ticket ID to search ";
            cin >> id;
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (ticketID[i] == id)
                {
                    cout << "Found -> Ticket ID: " << ticketID[i]
                         << " Customer: " << customerName[i]
                         << " Event: " << eventName[i] << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Ticket not found\n";
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
