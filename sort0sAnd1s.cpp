//DUTCH NATIONAL FLAG WHERE MID WILL ITERATE THE ARRAY AND COUNT THE NUMBER OF 0 AND 1 AND 2 
// IF AT MID 0 IS THERE THEN SWAP IT WITH THE VALUE AT LOW THEN LOW++ AND MID++
//WHEN MID IS 1 THEN MID++
//WHEN MID IS 2 THEN SWAP WITH THE HIGH INDEX VALUE AND HIGH--
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sort(int v[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(v[mid]==0){
            swap(v[mid],v[low]);
            low++;
            mid++;
        }else if(v[mid]==1){
            mid++;
        }else{
            swap(v[mid],v[high]);
            high--;
        }
    }
}
void printVector(int v[],int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    

        int n;
        cin>>n;
        int *v = new int[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v,n);
        printVector(v,n);
        return 0;
    }



