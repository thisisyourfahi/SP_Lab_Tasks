// Write a program to find the largest of three numbers using nested if-else conditions.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a >= b && a >= c){
        cout << "The largest number is " << a << endl;
    }
    else if(b >= a && b >= c){
        cout << "The largest number is " << b << endl;
    }
    else if(c >= a && c >= b){
        cout << "The largest number is " << c << endl;
    }

    return 0;
}
