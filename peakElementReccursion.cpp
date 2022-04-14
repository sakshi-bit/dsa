#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int peakElement(int arr[],int start,int end){

    int mid=start+(end-start)/2;

        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
        return mid;
        }
        else if(arr[mid]<arr[mid+1]){
            return peakElement(arr,mid+1,end);
        }
        else{
            return peakElement(arr,0,mid);
        }
        return -1;
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = peakElement(arr,0,n-1);
    cout<<ans<<endl;
    return 0;
}