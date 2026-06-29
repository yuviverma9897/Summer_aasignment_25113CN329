// to create inventory management system
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int itemID[100];
    string itemName[100];
    int itemQty[100];
    int n = 0, choice;

    do
    {
        cout << "\nInventory Management System\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Item ID: ";
            cin >> itemID[n];
            cout << "Enter Item Name (single word): ";
            cin >> itemName[n];
            cout << "Enter Item Quantity: ";
            cin >> itemQty[n];
            n++;
            cout << "Item added successfully\n";
        }
        else if (choice == 2)
        {
            cout << "\nAll Items in Inventory:\n";
            for (int i = 0; i < n; i++)
            {
                cout << "ID: " << itemID[i]
                     << " Name: " << itemName[i]
                     << " Quantity: " << itemQty[i] << endl;
            }
        }
        else if (choice == 3)
        {
            int id;
            cout << "Enter Item ID to search: ";
            cin >> id;
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (itemID[i] == id)
                {
                    cout << "Found -> ID: " << itemID[i]
                         << " Name: " << itemName[i]
                         << " Quantity: " << itemQty[i] << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Item not found\n";
        }
        else if (choice == 4)
        {
            int id, qty;
            cout << "Enter Item ID to update: ";
            cin >> id;
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (itemID[i] == id)
                {
                    cout << "Enter new quantity: ";
                    cin >> qty;
                    itemQty[i] = qty;
                    cout << "Quantity updated successfully\n";
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Item not found\n";
        }
        else if (choice == 5)
        {
            cout << "Exiting system...\n";
        }
        else
        {
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
