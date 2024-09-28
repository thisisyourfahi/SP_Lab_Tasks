// A program to sort an array of integers in ascending order using a basic sorting algorithm like bubble sort.

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

    for(int i = 0; i < n - 1; i++){
        bool swapped = false;
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if(!swapped){
            break;
        }
    }

    cout << "Sorted Array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
    return 0;
}
