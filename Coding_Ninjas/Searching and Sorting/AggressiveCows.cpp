#include<bits/stdc++.h>
using namespace std;

#define ll long long


bool check(ll n,ll* pos,ll c,ll val){
    ll cnt=1;
    ll last_pos = pos[0];

    for(ll i=1;i<n;i++){
        if(pos[i]-last_pos>=val){
            cnt++;
            last_pos = pos[i];
        }
        if(cnt==c)
        return true;
    }

    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test;
    cin>>test;

    while(test--){
        ll n,c;
        cin>>n>>c;
        ll pos[n];
        for(ll i=0;i<n;i++){
            cin>>pos[i];
        }

        sort(pos,pos+n);

        ll max_diff = pos[n-1]-pos[0];
        ll min_diff = 0;

        ll ans=INT_MIN;
        while(min_diff <= max_diff){
            ll mid = min_diff +(max_diff-min_diff)/2;
            if(check(n,pos,c,mid)){
                ans = mid;
                min_diff = mid+1;
            }
            else{
                max_diff = mid-1;
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}