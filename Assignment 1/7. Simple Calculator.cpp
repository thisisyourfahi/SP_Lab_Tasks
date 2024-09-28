/* Write a program to create a simple calculator using the switch-case statement. 
   The program should perform addition, subtraction, multiplication, and division based on user input.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "What would you like to do?" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    int input;
    cin >> input;

    cout << "\nEnter the two numbers : ";
    int a, b;
    cin >> a >> b;

    switch(input)
    {
    case 1:
        cout <<"The result is = "<< a + b << endl;
        break;
    case 2:
        cout <<"The result is = "<< a - b << endl;
        break;
    case 3:
        cout <<"The result is = "<< a * b << endl;
        break;
    case 4:
        cout <<"The result is = "<< (double)a / b << endl;
        break;
    }

    return 0;
}
