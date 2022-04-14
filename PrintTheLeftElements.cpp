// { Driver Code Starts
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


    int leftElement(int *a, int n) {
        // Your code goes here   
        sort(a,a+n);
        if(n%2==0){
            return a[(n/2)-1];
        }else{
            return a[n/2];
        }
    }


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *a = new int[n];
        int  i;
        for (i = 0; i < n; i++) cin >> a[i];
    
        cout << leftElement(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends