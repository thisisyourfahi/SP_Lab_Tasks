// Write a program that takes a number and determines whether it's positive, negative, or zero using if-else statements.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    if(n > 0) cout << "The number is positive.\n";
    else if(n < 0) cout << "The number is negative.\n";
    else cout << "The number is zero.\n";

    return 0;
}
