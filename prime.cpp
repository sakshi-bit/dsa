#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int i=1;
    int count=0;
    while(i<=n){
    if(n%i==0){
        count++;
    }
    i++;
}
    if(count==2){
        cout<<n<<" "<<"is a prime number"<<endl;
    }else{
        cout<<n<<" "<<"is not a prime number"<<endl;
    }
    return 0;
}