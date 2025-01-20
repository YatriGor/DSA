// Sum of first N natural numbers - parametrized method
#include<iostream>
using namespace std;

void sum(int i, int num){
    if(i<1){
        cout << num << endl;
        return;
    }
    sum(i-1, num+i);
}

int main(){
    int N;
    cout << "Enter N : ";
    cin >> N;
    cout << "The sum is : ";
    sum(N,0);
    return 0;
}