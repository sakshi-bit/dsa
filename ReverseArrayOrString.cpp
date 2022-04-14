#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string reverse(string str){
    int start = 0;
    int end = str.length()-1;
    while(start<=end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    return str;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        cout<<reverse(str)<<endl;
    }
    return 0;
}