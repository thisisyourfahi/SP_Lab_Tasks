// A program to calculate the factorial of a number using a while loop.

#include <bits/stdc++.h>
using namespace std;

void Factorial(int n){
    int answer = 1;
    while(n > 1){
        answer *= n;
        n--;
    }
    cout << answer << endl;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Factorial(n);
    return 0;
}
