//to check string rotation
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string" << endl;
    cin >> str1;
    cout << "Enter second string" << endl;
    cin >> str2;

    if (str1.size() != str2.size()) {
        cout << "Strings are not rotations" << endl;
        return 0;
    }

    string temp = str1 + str1;
    bool isRotation = false;

    for (int i = 0; i <= temp.size() - str2.size(); i++) {
        int j;
        for (j = 0; j < str2.size(); j++) {
            if (temp[i + j] != str2[j]) {
                break;
            }
        }
        if (j == str2.size()) {
            isRotation = true;
            break;
        }
    }

    if (isRotation)
        cout << "Strings are rotations" << endl;
    else
        cout << "Strings are not rotations" << endl;

    return 0;
}
