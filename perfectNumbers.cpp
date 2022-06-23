#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the value of n: ";cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==2*n){
        cout<<"it is a perfect number"<<endl;
    }else{
        cout<<"it is not a perfect number"<<endl;
    }
    return 0;
}