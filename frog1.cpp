#include<bits/stdc++.h>
using namespace std;

int dp[100001];
int arr[100001];
int k;
int minimumCost(int i){

    if(i==0) return 0;
    if(dp[i]!=-1)
        return dp[i];
    int cost=INT_MAX;
    for(int j=1;j<=k;j++)
        if(i-j>=0)
            cost = min(cost,minimumCost(i-j)+abs(arr[i]-arr[i-j]));
  
    return dp[i]=cost;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n>>k;
    for(int i=0;i<n;i++) 
        cin>>arr[i];
    
    cout<<minimumCost(n-1)<<"\n";
    return 0;
}