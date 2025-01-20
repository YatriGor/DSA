// Write a program to reverse a given number (e.g., input 123, output 321).

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a num : ";
    cin >> num;
    int ognum = num, rev=0, digit;
    while(num!=0){
        digit = num%10;
        rev = rev*10 + digit;
        num = num / 10;
    }
    cout << rev;
    return 0;
}