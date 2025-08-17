#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum;
    cin>>n;
    sum = 0;
    int i = 0;
    while(i<=n){
        sum = sum + i;
        i+=2;
    }
    cout << "the sum is " << sum << endl;

}