#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int *arr1 = new int[n];
    int *arr2 = new int[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int res1=0;
    int res=0;
    for(int i=0;i<n;i++){
        res1 = res1+arr1[i];
    }
    for(int i=0;i<m;i++){
        res = res+arr2[i];
    }
    res = res+res1;


    cout<<res<<endl;
}