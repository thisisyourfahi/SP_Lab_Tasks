/* Write a program that takes the lengths of three sides of a triangle and determines 
if the triangle is valid based on the conditions of a valid triangle using conditional statements.
*/

/* Sum of any two sides must be greater than the third side.
  a + b > c
  a + c > b
  b + c > a
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the length of the three sides of a triangle:\n";
    cout <<  "a = ";
    cin >> a;
    cout <<  "b = ";
    cin >> b;
    cout <<  "c = ";
    cin >> c;

    if(a + b > c && a + c > b && b + c > a){
        cout << "The triangle is valid.\n";
    }
    else{
        cout << "The triangle is not valid.\n";
    }

    return 0;
}
