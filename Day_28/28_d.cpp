//to create contact management system
#include <iostream>
#include <string>
using namespace std;

int main() {
    int contactID[100];
    string contactName[100];
    string contactPhone[100];
    int n = 0, choice;

    do {
        cout << "Contact Management System\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter your choice ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Contact ID ";
            cin >> contactID[n];
            cout << "Enter Contact Name (single word) ";
            cin >> contactName[n];
            cout << "Enter Contact Phone ";
            cin >> contactPhone[n];
            n++;
            cout << "Contact added successfully\n";
        } 
        else if (choice == 2) {
            cout << "\nAll Contacts\n";
            for (int i = 0; i < n; i++) {
                cout << "ID: " << contactID[i] 
                     << " Name: " << contactName[i] 
                     << " Phone: " << contactPhone[i] << endl;
            }
        } 
        else if (choice == 3) {
            int id;
            cout << "Enter Contact ID to search ";
            cin >> id;
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (contactID[i] == id) {
                    cout << "Found -> ID: " << contactID[i] 
                         << " Name: " << contactName[i] 
                         << " Phone: " << contactPhone[i] << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Contact not found\n";
        }
        else if (choice == 4) {
            cout << "Exiting system\n";
        }
        else {
            cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}
