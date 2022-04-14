#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int *arr,int size,int key){
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    bool remainingPart = linearSearch(arr+1,size-1,key);
    return remainingPart;
}
int main(){
    int n;
    cin>>n;
    int*arr= new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int ans = linearSearch(arr,n,key);
    if(ans==0){
        cout<<"absent"<<endl;
    }else{
        cout<<"present"<<endl;
    }
    return 0;
}