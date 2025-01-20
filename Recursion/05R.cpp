// Print 1 to N using recursion but backtracking
#include<iostream>
using namespace std;

void print(int i, int N){
    if(i<1) return;
    print(i-1, N);
    cout << i << endl;
}

int main(){
    int N;
    cout << "Enter the N : ";
    cin >> N;
    print(N,N);
    return 0;
}

// Wrting cout statement after the function calling makes a huge difference in how the function or recurssion will flow, and here even on doing i-1, we are still getting output in linealy increasing manner.