#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(int i,int j,string& s){
    //base condition
    if(i>j){
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(i,j,s);
}
int main(){
    string s;
    cin>>s;
    int i=0;
    int j= s.length()-1;
    reverse(i,j,s);
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }
    reverse(i,j,s);
    cout<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }
    return 0;
}
