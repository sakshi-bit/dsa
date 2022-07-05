/*  Given an array of integers, find the closest (not considering distance, but value) greater on left of every element.
If an element has no greater on the left side, print -1 . 
O(n^2)
  */


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int* nearestLeftGreater(int  arr[], int n){
    static int output[100];
    for(int i=0;i<n;i++){
        int next = -1;
        for(int j=i-1;j>=0;j--){
            if(arr[i]<arr[j]){
                next = arr[j];
                break;
            }
        }

        output[i]=next;

    }
    return output;

}

int main(){
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array?"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int *p ;
    p = nearestLeftGreater(arr,n);

    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }

    return 0;


}