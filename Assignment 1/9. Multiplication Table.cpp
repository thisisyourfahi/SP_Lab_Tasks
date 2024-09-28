// A  program to display the multiplication table of a given number using a for loop.

#include <bits/stdc++.h>
using namespace std;

void TimesTable(int n){
    for(int i = 1; i <= 10; i++){
        cout << n << " X " << i << " = " << n * i << endl;
    }
}

int main(){
    int n;
    cout << "Enter the a number: ";
    cin >> n;

    TimesTable(n);
    return 0;
}
