#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int *arr,int n){
    //base case
    if(n==0 || n==1){
        return;
    }
    //1 case solve krle - lrgest element last pos par rakh de
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}