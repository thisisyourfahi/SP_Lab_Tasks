// A program to reverse the elements of an array using a loop.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "How many elements in the array? ";
    cin >> n;

    cout << "Enter the elements of the array : "; 
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    cout << "The array elements in reverse : ";
    for(int i = n -1; i >= 0; i--){
        cout << arr[i] << "  ";
    }
    cout << endl;
    return 0;
}
