//  A program to find the maximum element in an array using loops and conditional statements.
  
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

    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "The maximum elements in the array is : " << max << endl;
    return 0;
}
