// Write a program that takes a year as input and checks whether it is a leap year or not using if-else conditions.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cin >> year;

    if(year % 400 == 0){
        cout << "The year(" << year << ") is a leap year.\n" << endl;
    }
    else if(year % 100 == 0){
        cout << "The year(" << year << ") is not a leap year.\n" << endl;
    }
    else if(year % 4 == 0){
        cout << "The year(" << year << ") is a leap year.\n" << endl;
    }
    else{
        cout << "The year(" << year << ") is not a leap year.\n" << endl;
    }

    return 0;
}
