// Fibonacci using recursion
#include<iostream>
using namespace std;

int fibo(int n){
    if(n<=1) return n;
    int last = fibo(n-1);
    int slast = fibo(n-2);
    return last + slast;
}

int main(){
    int num;
    cout << "Enter the Nth number for finding fibonacci at that place : ";
    cin >> num;
    cout << "The fibonacci number at " << num << " position is " << fibo(num);
    return 0;
}