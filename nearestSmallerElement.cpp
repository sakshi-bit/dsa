#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> arr,int n){
vector<int> v;
stack<int> s;
    for(int i=0;i<n;i++){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if( s.size()>0 && s.top()<arr[i]){
            v.push_back(s.top());
        }
        else if( s.size()>0 && s.top()>=arr[i] ){
            while(s.size()>0 && s.top()>=arr[i]){
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




using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the vector?"<<endl;
    cin>>n;
    vector<int> pass;
    cout<<"enter the elemnts in the vector?"<<endl;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        pass.push_back(a);
    }
    vector<int> ans;
    ans = nextGreaterElement(pass,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}