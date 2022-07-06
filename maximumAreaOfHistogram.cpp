/*Find the largest rectangular area possible in a given histogram where 
the largest rectangle can be made of a number of contiguous bars. 
For simplicity, assume that all bars have same width and the width is 1 unit. 
For example, consider the following histogram with 7 bars of heights 
{6, 2, 5, 4, 5, 1, 6}. The largest possible rectangle possible is 12 
(see the below figure, the max area rectangle is highlighted in red)
https://www.geeksforgeeks.org/largest-rectangle-under-histogram/
 */





/*Find the largest rectangular area possible in a given histogram where 
the largest rectangle can be made of a number of contiguous bars. 
For simplicity, assume that all bars have same width and the width is 1 unit. 
For example, consider the following histogram with 7 bars of heights 
{6, 2, 5, 4, 5, 1, 6}. The largest possible rectangle possible is 12 
(see the below figure, the max area rectangle is highlighted in red)
https://www.geeksforgeeks.org/largest-rectangle-under-histogram/
 */





#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int maxArea(vector<int> heights,int n){
    vector<int>left;
  vector<int>right;
    stack<pair<int,int>>s;
    
    //nsl
    for(int i=0;i<n;i++){
        if(s.size()==0){
            left.push_back(-1);
        }
        else if(s.size()>0 && s.top().first<heights[i]){
            left.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=heights[i]){
            while(s.size()>0 && s.top().first>=heights[i]){
                s.pop();
            }

            if(s.size()==0){
                left.push_back(-1);
            }else{
                left.push_back(s.top().second);
            }
        }
        s.push({heights[i],i});
    }

    cout<<"left array "<<endl;
    for(int i=0;i<n;i++){
        cout<<left[i]<<" ";
    }

    cout<<endl;

    stack<pair<int,int>>st;

  

    //nsr
    for(int i=n-1;i>=0;i--){
        if(st.size()==0){
            right.push_back(n);
        }
        else if( st.size()>0 && st.top().first<heights[i]){
            right.push_back(st.top().second);
        }
        else if( st.size()>0 && st.top().first>=heights[i] ){
            while(st.size()>0 && st.top().first>=heights[i]){
                st.pop();
            }
            if(st.size()==0){
                right.push_back(n);
            }else{
                right.push_back(st.top().second);
            }
        }

    st.push({heights[i],i});
    }

    reverse(right.begin(),right.end());

    cout<<endl;
    cout<<"right array "<<endl;
    for(int i=0;i<n;i++){
        cout<<right[i]<<" ";
    }

    cout<<endl;


    //width
    int width[n];
    for(int i=0;i<n;i++){
        width[i] = right[i]-left[i]-1;
    }
    cout<<endl;
    cout<<"width array "<<endl;

    for(int i=0;i<n;i++){
        cout<<width[i]<<" ";
    }
    cout<<endl;

    //area
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        int x = width[i]*heights[i];
        if(x>maxi){
            maxi = x;
        }
    }
    return maxi;



}







int main(){
    int n;
    cout<<"enter the height array size "<<endl;
    cin>>n;
    vector<int> heights;
    cout<<endl;
    cout<<"enter the elemnts og the height array "<<endl;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        heights.push_back(a);
    }
    cout<<endl;
    int maximumAreaOfTheHistogram = maxArea(heights,n);
    cout<<maximumAreaOfTheHistogram<<endl;
    return 0;
}