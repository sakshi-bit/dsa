/*  Problem Statement
There are ‘N’ rabbits in a row represented a number line, with each rabbit having an integral x-coordinate. They all plan to meet at a single integer coordinate.
However, RabbitLand has a greedy government, so there are some restrictions on their movement as follows:
If a rabbit is at coordinate X, it can make a jump of 2 in any direction (i.e. to X-2 or X+2) at no cost.
If a rabbit is at coordinate X, it can make a jump of 1 in any direction (i.e. to X-1 or X+1) at the cost of one coin.
The rabbits want to pay their government as little as possible, so find the minimum number of coins they need to pay so that they can all meet at the same place.
Note - It is possible for multiple rabbits to be at the same coordinate.
For example:
If there are two rabbits at coordinates [1,2], the rabbit at coordinate 1 can pay one coin and reach 2. This one coin is the least possible value they need to pay.
Input Format:
The first line contains 'T', denoting the number of test cases.
For each Test :
The first line contains a single integer ‘N’, representing the number of rabbits.
The second line contains ‘N’ space-separated integers, representing the X coordinates of the rabbits.
Output Format:
For each test case, print one integer, the minimum number of coins the Government will receive.
Note:
You are not required to print the expected output. It has already been taken care of. Just implement the function.
Constraints -
1 <= ‘T’ <= 10
1 <= ‘N’ <= 10^5
-10^9 <= ‘X[i]’ <= 10^9
Note: It is guaranteed that the sum of N across all test cases will be at most 10^5.
Time Limit: 1 sec
Sample Input 1:
1
3
1 3 4
Sample Output 1
1
Explanation For Sample Input 1:
For test case 1:
    The rabbit at coordinate 1 can reach coordinate 3 at no cost, while the rabbit at coordinate 4 can reach 3 after paying one coin. Hence, the answer is 1.
Sample Input 2:
1
3
2 4 6
Sample Output 2:
0
*/


/* Parity Checking
Approach:

For any rabbit at point ‘i’, it can move to i ± 2, i ± 4 and so on at zero cost. So, we know that for any point X, all the rabbits which are at points with the same parity of X can reach X at no cost. 

So, if X is odd, all the rabbits at odd coordinates can reach X at a cost of 0, while all the rabbits at even coordinates will have to pay one coin to reach ‘X’.

Therefore, if X is odd, the minimum cost will be equal to the number of rabbits at even coordinates. Conversely, if X is even,  the minimum cost will be equal to the number of rabbits at odd coordinates. 

The answer will just be the minimum of the number of rabbits at odd coordinates and the number of rabbits at even coordinates.




Algorithm:

Assign countOdd = 0
Iterate a loop from i=0 to N-1
If X[i] is odd
Assign countOdd = CountOdd + 1
Assign countEven = N - countOdd
Return min(countOdd,countEven)
Time Complexity
O(N), where ‘N’ is the number of rabbits. 

Since we iterate over all the rabbits just once to count the number of them at odd coordinates, the time complexity is O(N).

Space Complexity
O(1), as we use a constant amount of additional space. */


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minimumCost(int *arr,int n){
    //number of odd coordinates
    int oddCount = 0;
    for(int i=0;i<n;i++){
        if(arr[i]&1){
            //if coordinate is odd
            oddCount++;
        }
    }
        //number of even coordinates
        int evenCount = n-oddCount;
        //answer = minimum of odd and even coordinates
        return min(evenCount,oddCount);
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *arr = new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int coins = minimumCost(arr,n);
        cout<<coins<<endl;
    }
}