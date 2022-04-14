#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n,int i){
    if(i>=n-1){
        return;
    }

        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
            swap(arr[i],arr[minIndex]);
        }
        selection_sort(arr,n,i+1);
    }

using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}