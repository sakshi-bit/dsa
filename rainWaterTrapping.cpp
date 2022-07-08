/*  Given n non-negative integers representing an elevation map where the width of each bar is 1,
compute how much water it is able to trap after raining.
Input: arr[]   = {2, 0, 2}
Output: 2
Structure is like below
| |
|_|
We can trap 2 units of water in the middle gap.

Input: arr[]   = {3, 0, 0, 2, 0, 4}
Output: 10
Structure is like below
     |
|    |
|  | |
|__|_| 
We can trap "3*2 units" of water between 3 an 2,
"1 unit" on top of bar 2 and "3 units" between 2 
and 4.  See below diagram also.
https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbHlfOV9zYUZVcnE4YWg2TGdrRWd4WWY4dXJMZ3xBQ3Jtc0ttQ3Y4RmhDdVEwVmM3ZjNicVo0WHJzNm9Sa3gwb3JYb0pYclFtZVYzLWhaaUtBVWtrTVAybjMtU05EOXdnbDRPbjJKRXdFOXQ3SEEwWUxxMHpZZ3hjbmwzNS12Sk9xcXRiNVpRMHNJMHZGVnMyY214QQ&q=https%3A%2F%2Fwww.geeksforgeeks.org%2Ftrapping-rain-water%2F&v=FbGG2qpNp4U
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int trap(int height[],int n ){
    int mxl[n];
    int mxr[n];
    mxl[0] = height[0]; //initialize first element as the height first element for comparing
    for(int i=1;i<n;i++){
        mxl[i] = max(mxl[i-1], height[i]);
    }

    mxr[n-1] = height[n-1]; //initialize last element of the mxr i.e maximum element int the right as the height last element for comparing
    for(int i=n-2;i>=0;i--){
        mxr[i] = max(mxr[i+1],height[i]);
    }

    int water[n];
    for(int i=0;i<n;i++){
        water[i] = min(mxl[i],mxr[i])-height[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + water[i];
    }

    return sum;



}
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int heights[n];
    cout<<"enter the elements in the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }

    int totalWaterTrapped = trap(heights,n);

    cout<<"the total water trapped is "<<totalWaterTrapped<<endl;
    return 0;

}

