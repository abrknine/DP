// In this frog can move k steps forwad instead if 2( like Previous ques)
// so frog have k option at avey index of array and he have to reach the end in min possible cost(cost=absdiff of cur and  prev elem of array)
#include<iostream>
#include<vector>
#include<climits>
#include <bits/stdc++.h>
// memoization soln
int frogJump(int n, vector<int> &heights int k,vector<int>&dp)
{
        if(n==0){
            return 0;
        }
        if(dp[n]!=0){
            return dp[n];
        }
        int mstep=INT_MAX;
        for(int j=1; j<=k; j++){

            if(i-j>0){
                 int jump=frogJump(n-j,heights,k)+abs(heights[n]-heights[n-k]);
                mstep=min(mstep,jump);
            }
   
        }
          return dp[n]=mstep;
}
//bottom up
int frogJump(int n, vector<int> &heights int k,vector<int>&dp)
{
        dp[0]=0;
        for( int i=1; i<n; i++){
        int mstep=INT_MAX;
             for(int j=1; j<=k; j++){

            if(i-j>0){
                 int jump=dp[n-j]+abs(heights[n]-heights[n-k]);
                mstep=min(mstep,jump);
            }
   
        }
      dp[i]=mstep;          
        }

        retrun dp[n-1];

        
          
}









int solve(int n, vector<int>& height , int k){
     vector<int> dp(n,-1);
    return  frogJump(n-1, height, dp, k);
}

int main() {

  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  int k=2;
//   vector<int> dp(n,-1);
  cout<<solve(n,height,k);
}