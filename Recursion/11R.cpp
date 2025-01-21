// Reversing Array using Recursion but using less variables this time!
// Every opposite element will be i , n-1-i! so no need for two variables
#include<iostream>
using namespace std;

int len;

void swapArr(int i, int Arr[]){
    if(i>=len/2) return;
    swap(Arr[i], Arr[len-1-i]);
    swapArr(i+1, Arr);
}

int main(){
    // Input the array 
    cout << "Enter the length of the Array : ";
    cin >> len;

    // Inputing the elements
    int Arr[len];
    cout << "Enter the elements : ";
    for(int i=0; i<len; i++){
        cin >> Arr[i];
    }

    // Prinitng the original array
    cout << "Before swapping : ";
    for(int i=0; i<len; i++){
        cout << Arr[i] << " ";
    }

    cout << endl;

    // Printing after swap
    swapArr(0, Arr);
    cout << "After swapping : ";
    for(int i=0; i<len; i++){
        cout << Arr[i] << " ";
    }

    return 0;
}