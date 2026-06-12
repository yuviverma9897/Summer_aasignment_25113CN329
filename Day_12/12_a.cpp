// func for palindrome
#include <iostream>
using namespace std;

bool palindrome(int n){
    int rev=0,rem,original;

    original=n;
    while(n>0){
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    if(original==rev){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    if(palindrome(num)){
        cout << num << " is a palindrome number"<<endl;
    }
    else{
        cout << num << " is not a palindrome number"<<endl;
    }
    return 0;
}