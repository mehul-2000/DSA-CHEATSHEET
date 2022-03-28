#include<bits/stdc++.h>
using namespace std;
vector<int> lis(vector<int>  arr,int n){
    vector<int> longest(n);
    for(int i=0;i<n;i++)
        longest[i]=0;
    longest[0]=1;
    for(int i=1;i<n;i++){
        longest[i]=1;
        for(int j=i-1;j>=0;j--){
            if(arr[i]<=arr[j])
                continue;
            int possibleAns = longest[j]+1;
            if(possibleAns>longest[i])
            longest[i] = possibleAns;
        }  
    }
    
    return longest;
}
int main(){
    
    // write your code here
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int> arr(n);
      	for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vector<int> prefix = lis(arr,n);
        
        reverse(arr.begin(),arr.end());
        vector<int> suffix = lis(arr,n);
        reverse(suffix.begin(),suffix.end());
        
        int best = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(best < prefix[i]+suffix[i]-1)
                best = prefix[i]+suffix[i]-1;
        }
        cout<<best<<"\n";
    }
    return 0;
}