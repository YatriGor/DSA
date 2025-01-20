// Print 1 to N using recursion
#include<iostream>
using namespace std;


void print(int num, int N){
    if(num==N+1) return;
    else{
        cout << num << endl;
        num++;
        print(num, N);
    }
}

int main(){
    int num = 1, N;
    cout << "Enter the N : ";
    cin >> N;
    print(num, N);
    return 0;
}