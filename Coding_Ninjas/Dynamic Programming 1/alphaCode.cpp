#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int num_codes(string str,int size){
    ll* output = new ll[size+1];
    output[0]=1;
    output[1]=1;
    
    for(ll i=2;i<=size;i++)
    {
        //very very important 
        if(str[i-1]!='0')
        output[i]=output[i-1];
        if(str[i-2]!=0 && (str[i-2]-'0')*10+(str[i-1]-'0')<=26 && (str[i-2]-'0')*10+(str[i-1]-'0')>0)
            output[i]+=output[i-2];
        
        output[i]%=mod;
    }
    
    ll ans = output[size]%mod;
    delete[] output;
    return ans;
}
int main(){
    
    // write your code here
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        cout<<num_codes(s,s.size())<<"\n";
    }
    return 0;
}