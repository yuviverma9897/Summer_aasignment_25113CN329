//to create a menu driven array operation system
#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, choice;

    do {
        cout << "\n--- Menu Driven Array Operations ---\n";
        cout << "1. Input Array\n";
        cout << "2. Display Array\n";
        cout << "3. Search Element\n";
        cout << "4. Sort Array\n";
        cout << "5. Find Maximum\n";
        cout << "6. Find Minimum\n";
        cout << "7. Calculate Sum and Average\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter size of array: ";
            cin >> n;
            cout << "Enter " << n << " elements:\n";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
        }
        else if (choice == 2) {
            cout << "Array elements: ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else if (choice == 3) {
            int key, found = 0;
            cout << "Enter element to search: ";
            cin >> key;
            for (int i = 0; i < n; i++) {
                if (arr[i] == key) {
                    cout << "Element found at position " << i+1 << endl;
                    found = 1;
                    break;
                }
            }
            if (!found) cout << "Element not found\n";
        }
        else if (choice == 4) {
            for (int i = 0; i < n-1; i++) {
                for (int j = i+1; j < n; j++) {
                    if (arr[i] > arr[j]) {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            cout << "Array sorted successfully\n";
        }
        else if (choice == 5) {
            int max = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] > max) max = arr[i];
            }
            cout << "Maximum element: " << max << endl;
        }
        else if (choice == 6) {
            int min = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] < min) min = arr[i];
            }
            cout << "Minimum element: " << min << endl;
        }
        else if (choice == 7) {
            int sum = 0;
            for (int i = 0; i < n; i++) sum += arr[i];
            cout << "Sum of elements: " << sum << endl;
            cout << "Average: " << (double)sum/n << endl;
        }
        else if (choice == 8) {
            cout << "Exiting program...\n";
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 8);

    return 0;
}
