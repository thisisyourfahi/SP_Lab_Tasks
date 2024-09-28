// A program to check whether a given number is prime or not using a for loop and conditional statements.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n <= 1){
        cout << "The number is not prime." << endl;
        return 0;
    }
    bool prime = true;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            prime = false;
            break;
        }
    }

    if(prime) cout << "The number is prime." << endl;
    else cout << "The number is not prime." << endl;
    return 0;
}
