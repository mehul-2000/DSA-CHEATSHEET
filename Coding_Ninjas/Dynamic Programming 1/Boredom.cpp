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
        for(int i=0;i<n;i++)
            cin>>arr[i];

        int freq[1001];
        memset(freq, 0, sizeof(freq));
        
        for(int x:arr)
            freq[x]++;

        for(int i=2;i<=1000;i++){
            freq[i] = max(freq[i-1],freq[i-2]+(i*freq[i]));
        }

        cout<<freq[1000]<<"\n";
    }
    return 0;
}