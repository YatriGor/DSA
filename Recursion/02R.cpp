// Print name 5 times using recursion
#include<iostream>
using namespace std;

void print(int count, string name){
    if (count == 6) return;
    else{
        cout << name << endl;
        count++;
        print(count, name);
    }
}

int main(){
    int count = 1;
    print(count, "Yatri");
    return 0;
}