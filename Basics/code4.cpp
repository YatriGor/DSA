// Write a program to check whether a number is positive, negative, or zero.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number : ";
    cin>> num;
    if(num>0) cout << "The num is positive!";
    else if(num<0) cout << "The number is negative!";
    else cout << "The numebr is zero.";
    return 0;
}