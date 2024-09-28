// A program to reverse a given integer using a while loop.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The reverse number is: ";
    while(n > 0){
        cout << n % 10;
        n = n / 10;
    }
    return 0;
}
