#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int n,sum;
//     cin>>n;
//     sum = 0;
//     int i = 0;
//     while(i<=n){
//         sum = sum + i;
//         i+=2;
//     }
//     cout << "the sum is " << sum << endl;

// }


//subtract the product and sum od digits in an integer
int main(){
    int n;
    cout << "enter n: " <<endl;
    cin>> n;
    int pro1 = 1,sum1 = 0;
    int digit;
    while(n>1){
        digit = n%10;
        pro1 *= digit;
        digit = n%10;
        sum1 += digit;
        n = n/10;
    }
    cout << pro1-sum1 << endl;
}
