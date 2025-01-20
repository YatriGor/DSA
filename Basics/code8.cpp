// Write a program to calculate the sum of the first n natural numbers.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int sum = 0;
    for(int i=1 ; i<=num ; i++){
        sum += i;
    }
    cout << "The sum of first " << num << " natural numbers is : " << sum << endl;
    return 0;
}