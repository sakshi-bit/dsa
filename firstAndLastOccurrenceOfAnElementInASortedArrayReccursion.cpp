#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int firstOccurrence(int arr[],int n,int start,int end,int target){
int start=0;
int end = n-1;
int res=-1;
while(start<=end){
    int mid = start+(end-start)/2;
    if(arr[mid]==target){
        res=mid;
        end = mid-1;

    }
    if(arr[mid]<target){
        start = mid+1;
    }
    if(arr[mid]>target){
        end = mid-1;
    }
}
return res;
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int ans1=firstOccurrence(arr,n,0,n-1,target);
    cout<<ans1<<" ";
    return 0;
}