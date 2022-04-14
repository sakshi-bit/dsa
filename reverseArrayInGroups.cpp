#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverseInGroups(int *arr,int n,int k){
    for(int i=0;i<n;i=i+k){
        int left = i;
        int right = min(i+k-1,n-1);
        while(left<right){
            swap(arr[left++],arr[right--]);
        }
    }
}
int main(){
        int n;
        cin>>n;
        int k;
        cin>>k;
        int *arr = new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        reverseInGroups(arr,n,k);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    
    return 0;
}