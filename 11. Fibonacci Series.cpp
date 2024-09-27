// A program to generate the Fibonacci series up to n terms using a for loop.

#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n){
    int fibo1 = 1;
    int fibo2 = 1;
    int newfibo = 1;

    cout << "\nThe Fibonacci series: 0  1  ";
    for(int i = 3; i <= n; i++){
        cout << newfibo << "  ";
        newfibo = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = newfibo;
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;

    if(n == 1){
        cout << "0" << endl;
    }
    else if(n == 2){
        cout << "0  1" << endl;
    }
    else if(n >= 3){
        fibonacci(n);
    }
}
