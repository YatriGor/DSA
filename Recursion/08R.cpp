// using Recursion find the sum of first N natural numbers using FUNCTIONAL method.
#include<iostream>
using namespace std;

int sum(int N){
    if(N==0){
        return 0; //Base case
    }
    return N + sum(N-1);

}

int main(){
    int N;
    cout << "Enter the N : ";
    cin >> N;
    cout << "The sum of first " << N << " natural numbers is : " << sum(N) << endl;
    return 0;
}