#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m = n;
    int digit;
    int sum=0;
    while(n>0){
        digit = n%10;
        sum+=digit*digit*digit;
        n=n/10;
    }
    
    if(sum==m)
        cout<<"armstrong";
    else
        cout<<"not armstrong";
    return 0;
}
