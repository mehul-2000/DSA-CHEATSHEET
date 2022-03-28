#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int test;
    // cin>>test;
    // while(test--){
        int n;
        cin>>n;
        while(n>=1){
            cout<<n<<" ";
            if(n%2==0)
            n/=2;
            else
            {
                if(n==1)
                break;
                n*=3;
                n+=1;
            }
        }
    // }
    return 0;
}