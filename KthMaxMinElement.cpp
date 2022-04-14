#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int kthElement(int arr[],int l,int r,int k){
    sort(arr,arr+r+1);
    return arr[k-1];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int *arr = new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        set<int> s(arr,arr+n);
        set<int> ::iterator itr=s.begin();
        advance(itr,k-1);
        int freq=0;
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++){
            freq= freq+(it->second);
            if(freq>=k){
            cout<<it->first<<endl;
            break;
            }
        }
        // cout<<*itr<<endl;
    
        // cout<<kthElement(arr,0,n-1,k)<<endl;
    }
    return 0;
}