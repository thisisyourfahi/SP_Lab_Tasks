#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch, in;
    cout << "Enter a character : ";
    cin >> in;

    ch = tolower(in);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        cout << "It's a Vowel\n" << endl;;
    }
    else{
        cout << "It's a Consonant\n" << endl;
    }

    return 0;
}
