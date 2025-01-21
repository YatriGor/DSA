// reverse an Array using recursion
#include<iostream>
using namespace std;

void swapArr(int l, int r,int Arr[]){
    if(l >= r) return;
    swap(Arr[l], Arr[r]);
    swapArr(l+1, r-1, Arr);
}

int main(){
    int len;
    cout << "Enter the length of Array : ";
    cin >> len;

    int Arr[len];
    cout << "Enter the elements of Array : ";
    for(int i=0; i<len; i++){
        cin >> Arr[i];
    }

    // Before swapping
    cout << "Original Array : ";
    for(int i=0; i<len; i++){
        cout << Arr[i] << " ";
    }

    cout << endl;

    // After Swapping
    swapArr(0, len-1, Arr);
    cout << "After swapping : ";
    for(int i=0; i<len; i++){
        cout << Arr[i] << " ";
    }
    return 0;
}