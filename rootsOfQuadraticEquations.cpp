#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    float root1,root2;
    root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    root2 = (-b - sqrt(b*b -4*a*c))/(2*a);
    cout<<root1<<" "<<root2<<endl;
    return 0;
}