/* Design a Data Structure SpecialStack that supports all the stack operations like push(), pop(), isEmpty(), isFull()
and an additional operation getMin() which should return minimum element from the SpecialStack. 
All these operations of SpecialStack must be O(1). 
To implement SpecialStack, you should only use standard Stack data structure and no other data structure like arrays, list, .. etc.

Refer: https://www.geeksforgeeks.org/design-... .*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class MinStack{
public:
stack<int>s;
stack<int>ss;

int getMin(){
    if(ss.size()==0){
        return -1;
    }
    return ss.top();
}

void push(int elem){
    s.push(elem);
    if(ss.size()==0 || ss.top()>=elem){
        ss.push(elem);
    }
}

int pop(){
    if(s.size()==0)
        return -1;
    int ans = s.top();
    s.pop();
    if(ss.top()==ans)
        ss.pop();
    return ans;

}

int top(){
    return s.top();
}

};
int main(){
    MinStack s;
    s.push(5);
    s.push(22);
    s.pop();
    s.push(43);
    s.push(44);
    s.top();
    s.pop();
    cout<< s.getMin()<<endl;
    s.pop();
    cout<<s.getMin()<<endl;
    return 0;
}