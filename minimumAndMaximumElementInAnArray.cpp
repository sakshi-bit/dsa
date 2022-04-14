#include<iostream>
#include<bits/stdc++.h>
using namespace std;
pair<long long,long long> getMinMax(long long arr[],int n){
    sort(arr,arr+n);
    return {arr[0],arr[n-1]};
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int  n;
        cin>>n;
        long long *arr = new long long[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        pair<long long,long long> ans=getMinMax(arr,n);
        cout<<ans.first<<" "<<ans.second<<endl;
        
        
    }
    return 0;
}