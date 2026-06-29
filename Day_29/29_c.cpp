//to create a menu driven string operation system
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, str2;
    int choice;

    do {
        cout << "\n--- Menu Driven String Operations ---\n";
        cout << "1. Input String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Reverse String\n";
        cout << "5. Check Palindrome\n";
        cout << "6. Concatenate Another String\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter a string: ";
                cin.ignore(); // clear buffer
                getline(cin, str);
                break;

            case 2:
                cout << "String: " << str << endl;
                break;

            case 3:
                cout << "Length: " << str.length() << endl;
                break;

            case 4: {
                string rev = string(str.rbegin(), str.rend());
                cout << "Reversed: " << rev << endl;
                break;
            }

            case 5: {
                string rev = string(str.rbegin(), str.rend());
                if (str == rev)
                    cout << "Palindrome" << endl;
                else
                    cout << "Not Palindrome" << endl;
                break;
            }

            case 6:
                cout << "Enter another string: ";
                cin.ignore();
                getline(cin, str2);
                str = str + str2;
                cout << "Concatenated String: " << str << endl;
                break;

            case 7:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while(choice != 7);

    return 0;
}
