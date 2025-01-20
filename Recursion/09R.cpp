// Recursion Factorial using functional method
#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    int N;
    cout << "Enter the N : ";
    cin >> N;
    cout << "The factorial of " << N << " is " << fact(N);
    return 0;
}