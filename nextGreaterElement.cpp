/* Next Greater Element

Difficulty Level : Medium
Last Updated : 28 Jun, 2022
Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in the array. Elements for which no greater element exist, consider the next greater element as -1. 

Examples: 

For an array, the rightmost element always has the next greater element as -1.
For an array that is sorted in decreasing order, all elements have the next greater element as -1.
For the input array [4, 5, 2, 25], the next greater elements for each element are as follows.
Element       NGE
    4      -->   5
    5      -->   25
    2      -->   25
    25     -->   -1*/

    /* O(n^2)*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int* nextGreaterElement(int arr[],int n){
    static int output[100];
    int next;
    for(int i=0;i<n;i++){
        next = -1;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                next = arr[j];
                break;
            }

        
        
    }
    output[i] = next;

}
return output;
}




int main(){
    int* ptr;
    int n;
    cout<<"Enter the size of an array?"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
    ptr = nextGreaterElement(arr,n);
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }

    return 0;



}

