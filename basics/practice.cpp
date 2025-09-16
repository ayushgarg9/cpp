#include <bits/stdc++.h>
using namespace std;
int main(){
    // finding smallest element in array by linear search
    // int arr[5]={3,6,9,1,5};
    // int smallest = INT_MAX;
    // int sizeofarr = 5;
    // for(int i =0;i<sizeofarr;i++){
    //     smallest = min(arr[i],smallest);
    // }
    // cout<<"smallest in array 1 is "<<smallest;

    // finding largest element in array by linear search
    // int arr[5]={3,6,9,1,5};
    // int largest = INT_MIN;
    // int sizeofarr = 5;
    // for(int i =0;i<sizeofarr;i++){
    //     largest = max(arr[i],largest);
    // }
    // cout<<"largest in array 1 is "<<largest;

    // finding index also 
    int arr[5]={3,6,2,1,9};
    int largest = INT_MIN;
    int sizeofarr = 5;
    int count = -1;
    for(int i =0;i<sizeofarr;i++){
        if(arr[i]>largest){
            largest = arr[i];
            count++;
        }
    }
    cout<<"largest element in array 1 is " <<largest <<" its index is "<< count;
}