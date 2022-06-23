#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(target-nums[i])!=mpp.end()){
                ans.push_back(mpp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }

            mpp[nums[i]] = i;
        }
        
        return ans;
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