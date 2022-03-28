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
        string str;
        cin>>str;
        stack<char> stk;

        for(char x:str){
            stk.push(x);
        }
        string ans="";
        while(!stk.empty()){
            ans+=stk.top();
            stk.pop();
        }
        cout<<ans<<"\n";
    }
    return 0;
}