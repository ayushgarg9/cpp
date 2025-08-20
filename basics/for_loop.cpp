#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     cout << "printing count from 1 to " << n << "..."<< endl;
//     for(int i=1;i<=n;i++){
//         cout << i << endl;
//     }
// }

//fibonacci series 
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a <<" " <<b<<" ";
    for(int  i=1;i<=n;i++){
        int fib = a+b;
        cout << fib <<" ";
        a=b;
        b=fib;
    }
}
