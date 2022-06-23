#include<iostream>
using namespace std;

namespace sakshi {
    int value(){
        return 5;
    }
}
namespace pig {
    const double pi = 3.14;
    double value(){
        return 2*pi;
    }
} 
int main(){
    cout<<sakshi::value()<<"\n";
    cout<<pig::value()<<"\n";
    cout<<pig::pi<<"\n";
    return 0;
}