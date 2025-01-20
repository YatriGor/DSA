// Write a program to print the first n Fibonacci numbers.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int a = 0;
    int b = 1;
    int sum;
    for(int i=0; i<num ; i++){
        cout << a << " ";
        sum = a + b;
        a = b;
        b = sum;
    }
    return 0;
}