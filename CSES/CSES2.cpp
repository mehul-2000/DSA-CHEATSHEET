#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    

    int n,ans=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        string str;
        cin>>str;
        for(int i=0;i<2;i++){
            if(str[i]=='+')
            {
                ans++;
                break;
            }else if(str[i]=='-'){ 
                ans--;
                break;
            }
        }

    }
    cout<<ans;

    
    return 0;
}