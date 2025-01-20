// Write a program to swap two numbers without using a third variable.

#include<iostream>
using namespace std;

int main(){
    int x,y, tmp;
    cout << "Enter num1 : ";
    cin >> x;
    cout << "Enter num2 : ";
    cin >> y;
    cout << "Before swapping : x = " << x << " and y = " << y << endl;

    // Logic
    x = x + y;
    y = x - y;
    x = x - y;
    
    cout << "After swapping : x = " << x << " and y = " << y << endl;
    return 0;
}