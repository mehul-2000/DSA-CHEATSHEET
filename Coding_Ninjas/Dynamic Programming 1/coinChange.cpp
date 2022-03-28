#include<bits/stdc++.h>
using namespace std;
long long dp[11][5001];
long long solve(int* d,int n,int v){
    if(v<0)
        return 0;
    if(v==0)
        return 1;
    if(n==0)
        return 0;
    if(dp[n][v]!=-1)
        return dp[n][v];
    
    long long first = solve(d,n,v-d[0])%1000000007;
    long long second = solve(d+1,n-1,v)%1000000007;
    dp[n][v] = (first+second)%1000000007;
    return dp[n][v];
}
int main(){
    
    // write your code here
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        
        int d[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        int v;
        cin>>v;
        
        for(int i=0;i<=n;i++)
            for(int j=0;j<=v;j++)
                dp[i][j]=-1;
        cout<<solve(d,n,v)<<"\n";
    }
    return 0;
}