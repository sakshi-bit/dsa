#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int size){
    //base case
    if(size==0 || size==1)
        return true;
    else if(arr[0]>arr[1]){
        return false;
    }else{
    bool ans = isSorted(arr+1,size-1);
    return ans;
        
        
}

    
}
int main(){
    int n;
    cin>>n;
    int*arr= new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans = isSorted(arr,n);
    cout<<ans<<endl;
    return 0;

}