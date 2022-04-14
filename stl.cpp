#include<bits/stdc++.h>
//to add everything 
//there are lot of libraries in cp we require libraries to include every header file we use this
//rule 1 of cp is to use this.
//dont use this in interview
using namespace std;
namespace sakshi {
    int val =50;
    int getVal(){
        return val*10;
    }
}
struct node { 
     // declared as a node self datatype struct is in itself
    string str;
    int num;
    double doub;
    char* x;
    //constructor
    //better way
    node( string str_ ,int num_ ,double doub_ ,char* x_){
        str= str_;
        num = num_;
        doub=doub_;
        x=x_;
    }
};
/*namespace is like a scope if we define anything inside it can be accessed by sakshi::
c++  has taken all its functions and put that into std namespace 
if we do not add using namespace something like cout will not work in c++ 
instead we have to write
*/

/*  if we define an array globally this will have all 0  {0,0,0}*/


// array<int,3>my;
int main(){
/* int val = 50;
    double val=10.0;
    cout<<val<<" ";
    it throws an error*/
    double val=10.0;
    cout<<val<<endl;
    cout<<sakshi::val<<endl;
    std::cout<<val<<endl;
    /*if we do not add using namespace something like cout will not work in c++ 
instead we have to write*/
/* To save time we write using namespace it is used to declare scope or function */
cout<<sakshi::getVal()<<endl;

/* If we want to store {string,int,double,char,arr[]} together into one datatype => 
create our own datatype => struct it is like a container */

// node sakshi;
/*sakshi.str="srivastava";
sakshi.num=17;
sakshi.doub=17.0;*/

// it is a worng way dont declare like this instaed create a constructor
// better way

// node *sakshiii = new node("sakshi",17,17.0,"");
node sakshiii =  node("sakshi",17,17.0,"");
//arrays
// int arr[100];
// array<int>arr; // not used
//{?,?,?} garbage values w/o initialization
cout<<endl;
cout<<endl;
cout<<endl;

array<int,5> a={1,5,6};
for(auto it:a){
    cout<<it<<" ";
}
cout<<endl;
cout<<endl;
cout<<endl;
array<int,5> aq;
aq.fill(0);

// for each loop it iterates over elements
for(auto it:aq){
    cout<<it<<" ";
}
//iterators
/* begin(), end(),rbegin(),rend()
begin() will always point to starting index 
rbegin() points to last index
end() points to right after the end points to an empty address right after the last element
rend() right before the start */


/*  auto takes automatically the data type from the array
 */
cout<<endl;
cout<<endl;
array<int,5>woods = {1,3,4,5,6};

for(auto it=woods.begin();it!=woods.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
cout<<endl;
for(auto it=woods.rbegin();it!=woods.rend();it++){
    cout<<*it<<" ";
}
cout<<endl;
cout<<endl;
for(auto it=woods.end()-1;it>=woods.begin();it--){
    cout<<*it<<" ";
}




cout<<endl;

cout<<endl;

cout<<endl;



    return 0;
}