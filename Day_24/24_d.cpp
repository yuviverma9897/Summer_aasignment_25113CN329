// to remove duplicate characters
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter the string" << endl;
    cin >> str;

    string result = "";
    for (int i = 0; i < str.size(); i++) {
        bool duplicate = false;
        for (int j = 0; j < result.size(); j++) {
            if (str[i] == result[j]) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) {
            result.push_back(str[i]);
        }
    }

    cout << "The string after removing duplicates is " << result << endl;
    return 0;
}
