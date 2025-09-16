#include <bits/stdc++.h>
#include <math.h>
using namespace std;
void swapalternate(int arr[],int n){
    for(int i =0;i<n;i+=2){
        if(i+1 <n){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
}
int main(){
    int arr[6]={2,4,3,1,6,8};
    int brr[5]={4,6,2,8,1};
    swapalternate(arr,6);
    swapalternate(brr,5);

    printarray(arr,6);
    cout <<endl;
    printarray(brr,5);

}