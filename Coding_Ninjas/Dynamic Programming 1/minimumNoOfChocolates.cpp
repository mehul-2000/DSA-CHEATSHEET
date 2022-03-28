#include<bits/stdc++.h>
using namespace std;

#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test;
    cin>>test;

    while(test--){
        int n;
        cin>>n;


        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int dp[n];
        if(arr[0]<=arr[1])
        dp[0]=1;
        else
        dp[0]=2;

        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                dp[i]=1+dp[i-1];
            }
            else
            {
                dp[i]=1;
            }
        }
        
        for(int i=n-2;i>=0;i--){
            if(arr[i]>arr[i+1] && dp[i]<=dp[i+1])
                dp[i]=1+dp[i+1];
        }
        int ans=0;
        for(int x:dp)
            ans+=x;
        cout<<ans<<"\n";
    }
    return 0;
}