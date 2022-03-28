#include<bits/stdc++.h>
using namespace std;

long long minJumps(int n){
    long long* dp = new long long[n+1];
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++)
        dp[i] = ((dp[i-1]%1000000007)+(dp[i-2]%1000000007)+(dp[i-3]%1000000007))%1000000007;
    
    long long ans=dp[n]%1000000007;
    delete[] dp;
    return ans;
}
int main(){
    
    // write your code here
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        cout<<minJumps(n)<<"\n";
    }
    return 0;
}