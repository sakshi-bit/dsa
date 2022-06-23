#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }  
        }
        return {-1,-1};
        
    }
int main() {
    int n,target;
    cout<<"enter the value of array and target value???"<<endl;
    cin>>n>>target;

    vector<int>ans;
    int a;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a;
        ans.push_back(a);
    }

    vector<int> pair = twoSum(ans,target);
    for(int i: pair){
        cout<<pair[i]<<" ";
    }
    return 0;


}