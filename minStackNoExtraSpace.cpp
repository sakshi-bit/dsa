/*Design a Data Structure SpecialStack that supports all the stack operations 
like push(), pop(), isEmpty(), isFull() and an additional operation getMin() which should return minimum element from the SpecialStack.
All these operations of SpecialStack must be O(1). To implement SpecialStack, you should only use standard Stack data structure 
and no other data structure like arrays, list, .. etc.

Refer: https://www.geeksforgeeks.org/design-... .   */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class MinStack {
    stack<int>s;
    int minElem = INT_MAX;
    public:
    int getMin(){
        if(s.size()==0)
            return -1;
        
        return minElem;
    }
    void push(int x){
        if(s.size()==0){
            s.push(x);
            minElem = x;
        }
        else if(x>=minElem){
            s.push(x);
        } else if(x<minElem){
            s.push(2*x-minElem);
            minElem = x;
        }
    }
    void pop(){
        if(s.size()==0){
            return ;
        }
        else if(s.top()>=minElem){
            s.pop();
        }
        else if(s.top()<minElem){
            minElem = 2*minElem-s.top();
            s.pop();
        }
    }

    int top(){
        if(s.size()==0)
            return -1;
        else if(s.top()>=minElem)
            return s.top();
        
        else if(s.top()<minElem)
            
        return minElem;
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