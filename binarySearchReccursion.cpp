#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int *arr,int s,int e,int k){
    if(s>e){
        return false;
    }
    int mid = s+ (e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    if(arr[mid]>k){
        return binarySearch(arr,s,mid-1,k);
    }
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int e=n;
    int s=0;
    int ans = binarySearch(arr,s, e, k);
    cout<<ans<<endl;

    return 0;

}