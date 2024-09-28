// A program to count the number of digits in an integer using a while loop.

#include <bits/stdc++.h>
using namespace std;

void calculate(int n){
    int digits = 0;
    while(n > 0){
        digits++;
        n /= 10;
    }
    cout << "The number of digits: " << digits << endl;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    calculate(n);
    return 0;
}
