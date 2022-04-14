#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findMin(int arr[],int start,int end,int length){
    while(start<=end){
        int mid=start+(end-start)/2;
        int next=(mid+1)%length;
        int prev=(mid+length-1)%length;
        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
            return arr[mid];
        }
        else if(arr[end]<arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int length = n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minimum = findMin(arr,0,n-1,length);
    cout<<minimum<<endl;
    return 0;
}