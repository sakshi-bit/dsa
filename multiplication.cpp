#include<iostream>
using namespace std;
int main() {
    int n;
    int i=1;
    cout<<"enter value of n: "<<endl;
    cin>>n;
    while(i<=n) {
        // int ans = n*i;
        cout<<n <<"*"<<i<<" "<<"="<<" "<<n*i<<endl;
        i++;
    }
    return 0;

}