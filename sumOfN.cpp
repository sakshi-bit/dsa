#include<iostream>
using namespace std;
int main() {
    int i=0;
    int sum = 0;
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    while(i<=n){
        sum = sum + i;
        i++;

    }
    cout<<sum<<endl;
    return 0;
}