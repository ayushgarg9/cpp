#include <bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[5] = {5,3,7,2,9};
    int target  = 7;
    cout<<linearsearch(arr,5,target);
}