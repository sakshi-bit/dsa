/* The stock span problem is a financial problem where we have a series of n daily price quotes for a stock 
and we need to calculate span of stock’s price for all n days.
The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day,
for which the price of the stock on the current day is less than or equal to its price on the given day.
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85},
then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>nearestGreaterLeft(vector<int>arr,int n){

    stack<pair<int,int>> s;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top().first>arr[i]){
            v.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first<=arr[i]){
            while(s.size()>0 && s.top().first<=arr[i]){
                s.pop();
            }

            if(s.size()<0){
                v.push_back(-1);
            }else{
                v.push_back(s.top().second);
            }
        }

        s.push({arr[i],i});
    }
    return v;

}

vector<int>stockSpans(vector<int>pass,int n){

    vector<int> v = nearestGreaterLeft(pass,n);
    for(int i=0;i<v.size();i++){
        v[i] = i-v[i];
    }
    return v;
}






int main(){
    int n;
    cout<<"enter the size of the array "<<endl;
    cin>>n;
    vector<int> pass;
    cout<<"Enter the elements of the array "<<endl;
    int a;
    for(int i=0;i<n;i++){
    
        cin>>a;
        pass.push_back(a);
    }

    vector<int>output;
    output = stockSpans(pass,n);
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }



    return 0;


}