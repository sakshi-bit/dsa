/*  Given a binary matrix, find the maximum size rectangle binary-sub-matrix with all 1’s.
Example:

Input :  0 1 1 0
        1 1 1 1
        1 1 1 1
        1 1 0 0

Output :  1 1 1 1
          1 1 1 1 .  */



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int mah(vector<int>heights,int n){
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
    int n,m;
    cout<<"enter the no. of rows and colummns: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<endl;
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    vector<int>v;
    //copied first row 
    for(int j=0;j<m;j++){
        v.push_back(arr[0][j]);
    }

    //first histogram maximum
    int num = v.size();
    int mx = mah(v,num);
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                v[j]=0;
            }else{
                v[j] = v[j]+arr[i][j];
            }
        }
    mx = max(mx,mah(v,n));
    
    }

    cout<<"The maximum area of the binary histogram is "<<mx<<endl;

return 0;

    


    


}