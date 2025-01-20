// Write a program to take two integers as input and print their sum, difference, product, and quotient.

#include<iostream>
using namespace std;

int main(){
    int x, y;
    cout << "Enter num1 : ";
    cin >> x;
    cout<< "Enter num2 : ";
    cin >> y;
    int sum = x + y;
    cout << "The sum of is : " << sum << endl;
    int diff = x - y;
    cout<< "The difference is : " << diff << endl;
    int rem = x % y;
    cout << "The remainder is : " << rem << endl;
    int quo = x/y;
    cout << "The quotient is : " << quo << endl;
    return 0;
}