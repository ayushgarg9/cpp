#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "choose number between 1-3(but not 2): ";
    cin >> n;
    char ch = 'a';
    switch(n){
        case 1: cout << "well done entered number is 1" << endl;
                break;
        case 2: switch(ch){
            case 'a': cout << "why you entered 2?? I told you not to enter it..." << endl;
                    break;
                }
                break;
        case 3: cout << "welldone you entered 3!!" << endl;
                break;
    }

}