// Write a C program to check whether a given number is odd or even using an if-else statement.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n % 2 == 0){
        cout << "The number is even\n" << endl;
    }
    else{
        cout << "The number is odd\n" << endl;
    }

    return 0;
}
