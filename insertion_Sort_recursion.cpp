#include<iostream>
#include<bits/stdc++.h>
void insertionSort(int arr[],int n){
    if(n<=1){
        return;
    }
    insertionSort(arr,n-1);
    int temp=arr[n-1];
    int j=n-2;
    while(j>=0 && arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;

}
using namespace std;
int main(){
    int n ;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}