// A program that takes a score as input and assigns a grade (A, B, C, D, F) using the switch-case statement

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter your score: ";
    int score;
    cin >> score;
    score = score / 10;

    switch (score)
    {
    case 10:
    case 9:
    case 8:
        cout << "Your grade is A" << endl;
        break;
    case 7:
        cout << "Your grade is B" << endl;
        break;
    case 6:
        cout << "Your grade is C" << endl;
        break;
    case 5:
    case 4:
        cout << "Your grade is D" << endl;
        break;
    default:
        cout << "Your grade is F" << endl;
        break;
    }
    return 0;
}
