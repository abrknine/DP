// recursion+ memoization approach(jo pehle solve ho gaya hai use array me store kar do aur dubara solve karne ki bajaye array se utha lo)
//recursion is top-down approach we go from n to hit base case;
#include<iostream>
using namespace std;
vector<int>mem;
int fib(int n){
    if(n<=1){
        return n;
    }
    if(mem[n]!=-1){
        return mem[n];
    }

    return mem[n]=fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cin>>n;

    mem.resize(n+1,-1);

    int a=fib(n);
    cout<<a<<endl;
    return 0;



}

// bottom-up approach  means we go from base case to n //tabulation
#include<iostream>
using namespace std;
int main(){

 int n;
 cin>>n;
int dp[n+1];
//base cases
dp[0]=0;
dp[1]=1;
 //rest cases
 for(int i=2; i<n; i++){
     dp[i]=dp[i-1]+dp[i-2];
 }
cout<<dp[n]<<endl;
return 0;
}
