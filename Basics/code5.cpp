// Write a program to find the largest of three numbers.

#include<iostream>
using namespace std;

int main(){
    int x, y, z;
    cout << "Enter num1 : ";
    cin >> x;
    cout << "Enter num2 : ";
    cin >> y;
    cout << "Enter num3 : ";
    cin >> z;

    if (x>y && x>z){
        cout << x << " is the largest.";
    }
    else if(y>x && y>z){
        cout << y << " is the largest.";
    }
    else if (z>x && z>y){
        cout << z << " is the largest.";
    }

    return 0;
}