#include<iostream>
using namespace std;
int main(){
    int u,v,a;
    cin>>u>>v>>a;
    float speed;
    speed = (float)(v*v-u*u)/(2*a);
    cout<<speed<<endl;
    return 0;
}