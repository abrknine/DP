//same as min cost stair
//dp in 1D
#include <bits/stdc++.h>
#include<vector>
#include<climits>


//MEMOIZATION AORROACH TOP TO BOTTOM->converted from recursion
/*
int  f(int ind ,vector<int>& heights, vector<int>& d){

 if(ind==0){
        return 0;
    }
    if(d[ind]!=-1){
        return d[ind];
    }
     int step1=f(ind-1,heights,d)+abs(heights[ind]-heights[ind-1]);
     int step2=INT_MAX;
     if(ind>1){
     int step2=f(ind-2,heights,d)+abs(heights[ind]-heights[ind-2]);
     }
    return min(step1,step2);
}
int frogJump(int n, vector<int> &heights)
{
    vector<int> d(n+1,-1);
    // Write your code here.
    return f(n-1,heights,d);
}
*/
//BOTTOM UP


int frogJump(int n, vector<int> &heights)
{
        vector<int> d(n,0);
            d[0]=0;
            //d[1]=abs(heights[1]-heights[0]);

 for(int i=1; i<n; i++){
    int step1= d[i-1]+abs(heights[i]-heights[i-1]);
    int step2=INT_MAX;
    if(i>1){
      step2=d[i-2]+abs(heights[i]-heights[i-2]);
    }


       d[i]=min(step1,step2);

    }

    return d[n-1];


    

    
}
//space optimize code
//always  there is chance to this kindda space optimization when ther is n-1 and n-2 in 1d array;

int frogJump(int n, vector<int> &heights)
{
        int prev=0;
        int prev2=0;

 for(int i=1; i<n; i++){
    int step1= prev+abs(heights[i]-heights[i-1]);
    int step2=INT_MAX;
    if(i>1){
      step2=prev2+abs(heights[i]-heights[i-2]);
    }


    int  curr=min(step1,step2);
    prev2=prev;
    prev=curr;

    }

    return  prev;


    

    
}

