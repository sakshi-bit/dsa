#include<iostream>
#include<string>
using namespace std;
int getSum(int n){
    int ans;
    ans = (n+1)*n/2;
    return ans;
}
int main(){
    int n;
    cin>>n;
    string str;
    cout<<"enter your name"<<endl;
    // cin.ignore();
    cin>>str;
    cout<<"Welcome"<<" "<<str<<endl;

    int sum;
    sum = getSum(n);
    cout<<sum<<endl;
    return 0;
}