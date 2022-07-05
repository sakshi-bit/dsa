#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> nearestGreaterLeft(vector<int> arr,int n){
    stack<int> s;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i]){
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=arr[i]){
            while(s.size()>0 && s.top()<=arr[i]){
                s.pop();
            }

            if(s.size()==0){
                v.push_back(-1);
            }else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    return v;
}
int main(){
    int n;
    cout<<"enter the size of the vector?"<<endl;
    cin>>n;
    vector<int> arr;
    int a;
    cout<<"enter the elements of the array?"<<endl;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }

    vector<int> output;
    output = nearestGreaterLeft(arr,n);
    for(int i=0;i<n;i++){
        cout<<output[i]<<" ";
    }
    return 0;

}
