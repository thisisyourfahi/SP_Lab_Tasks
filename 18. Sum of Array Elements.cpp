// A program that takes an array of integers and finds the sum of its elements using a loop.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "How many elements in the array? ";
    cin >> n;

    cout << "Enter the elements of the array : "; 
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    
    cout << "The sum of the elements is : " << sum << endl;
    return 0;
}
