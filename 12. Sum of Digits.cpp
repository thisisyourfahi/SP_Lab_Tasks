// A program that takes an integer as input and calculates the sum of its digits using a while loop.

#include <bits/stdc++.h>
using namespace std;

void calculate(int n){
    int sumofdigits = 0;
    while(n > 0){
        sumofdigits += (n % 10);
        n /= 10;
    }
    cout << "The sum of the digits: " << sumofdigits << endl;
}

using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    calculate(n);
    return 0;
}
