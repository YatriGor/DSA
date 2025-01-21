// Check if a string is palindrome or not! --> Logic's in my Notes

#include<iostream>
using namespace std;

int len;

int palindrome(string name, int i){
    if(i>=len/2) return 1; // Returns 1 at base condition => True
    if(name[i] != name[len-1-i]){
        return 0; // If condition doesn't match then returns 0 => False.
    }
    palindrome(name, i-1);
}

int main(){
    string name;
    cout << "Enter the String : ";
    cin >> name;

    len = name.size();

    if(palindrome(name, 0)){
        cout << "This string is Palindrome.";
    }
    else{
        cout << "This string is not a Palindrome.";
    }
    
    return 0;
}