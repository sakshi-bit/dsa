#include<iostream>
#include<climits>
using namespace std;
int maxElement(int arr[],int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}
int minElement(int arr[],int n){
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    return mini;
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxElement(arr,n)<<endl;
    cout<<minElement(arr,n)<<endl;

}