#include <bits/stdc++.h>
#include <math.h>
using namespace std;
// void eveodd(int num){
//     if(num%2==0){if(num==0){cout<<"backchodi mat kar laude";}else{cout<<"even";}}
//     else{cout<<"odd";}
// }
// int main(){
//     int num;
//     cout<<"enter number: ";
//     cin>> num;
//     eveodd(num);
// }

int fac(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int nCr(int n ,int r){
    int ncr = (fac(n))/(fac(r)*fac(n-r));
    return ncr;
}
int main(){
    int n,r;
    cin>> n >> r;
    cout << nCr(n,r);
}
