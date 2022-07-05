#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int* nextSmallestElement(int arr[],int n){
    static int output[100];
    int next;
    for(int i=0;i<n;i++){
        next = -1;
        for(int j=i-1;j>=0;j--){
            if(arr[i]>arr[j]){
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

    
    ptr = nextSmallestElement(arr,n);
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }

    return 0;



}

