#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0;
    int digit;
    int m = n;
    while(n>0){
        digit = n%10;
        rev = rev*10+digit;
        n=n/10;
    }
    cout<<rev;
    cout<<endl;
    cout<<endl;
    if(rev==m){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }
    return 0;
}
