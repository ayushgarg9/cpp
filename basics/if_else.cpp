#include <bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character: " << endl;
    cin >> ch;
    if(ch>='a'&&ch<='z'){
        cout << "The character is a lowercase letter." << endl;
    }
    else if(ch>='A'&&ch<='Z'){
        cout << "The character is an uppercase letter." << endl;
    }
    else if(ch>='0'&&ch<='9'){
        cout << "The character is a digit." << endl;
    }
    else{
        cout << "The character is a special character." << endl;
    }
} 