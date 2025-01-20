// Print N to 1 using recursion
#include<iostream>
using namespace std;

void print(int N){
    if(N==0) return;
    else{
        cout << N << endl;
        N--;
        print(N);
    }
}

int main(){
    int N;
    cout << "Enter the N : ";
    cin >> N;
    print(N);
    return 0;
}