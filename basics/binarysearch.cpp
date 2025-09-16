#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){return mid;}
        if(arr[mid]>key){end = mid-1;}
        else{start = mid+1;}
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int evenarr[6]= {1,2,4,5,7,8};
    int oddarr[5] = {3,5,6,9,11};
    int eveans = binarysearch(evenarr,6,7);
    int oddans = binarysearch(oddarr,5,9);
    cout<<eveans<<endl;
    cout<<oddans;


}
