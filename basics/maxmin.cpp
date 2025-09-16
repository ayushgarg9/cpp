#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int getmax(int arr[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){if(arr[i]>max){max = arr[i];}}
    return max;
}
int getmin(int arr[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){if(arr[i]<min){min = arr[i];}}
    return min;
}
int main(){
    int n;
    cin >> n;
    int arr[20];
    for(int i =0;i<n;i++){cout<<"enter element: ";cin>>arr[i];}
    for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
    cout << endl;
    cout << getmax(arr,n)<<endl;
    cout << getmin(arr,n)<<endl;

    
}