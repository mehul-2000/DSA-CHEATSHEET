#include<bits/stdc++.h>
using namespace std;

#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int test = 0;
    cin >> test;
    while (test--){
        int r,c;
        cin>>r>>c;
        int** mat = new int*[r];

        for(int i=0;i<r;i++){
            mat[i] = new int[c];
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>mat[i][j];
            }
        }

        int** dp = new int*[r];

        for(int i=0;i<r;i++){
            dp[i] = new int[c];
        }


        dp[r-1][c-1]=1;
        dp[r-1][c-2]=1;
        dp[r-2][c-1]=1;

        for(int i=r-3;i>=0;i--){
            if(mat[i+1][c-1] < 0){
                dp[i][c-1]=dp[i+1][c-1]-mat[i+1][c-1];
            }
            else{
                dp[i][c-1]=max(1LL,(dp[i+1][c-1]-mat[i+1][c-1]));
            }
        }
        for(int i=c-3;i>=0;i--){
            if(mat[r-1][i+1] < 0){
                dp[r-1][i] = dp[r-1][i+1]-mat[r-1][i+1];
            }
            else{
                dp[r-1][i] = max(1LL,(dp[r-1][i+1]-mat[r-1][i+1]));
            }
        }

        for(int i=r-2;i>=0;i--){
            for(int j=c-2;j>=0;j--){
                // dp[i][j]= max((1LL),min(dp[i][j+1],dp[i+1][j]));
                int right,down;
                if(mat[i+1][j]<0){
                    down = dp[i+1][j] - mat[i+1][j];
                }
                else{
                    down = max(1LL,dp[i+1][j] - mat[i+1][j]);
                }

                if(mat[i][j+1]<0){
                    right = dp[i][j+1] - mat[i][j+1];
                }else{
                    right = max(1LL,dp[i][j+1] - mat[i][j+1]);
                }
                dp[i][j] = min(down,right);
            }
        }

        cout<<dp[0][0]<<"\n";
        for(int i=0;i<r;i++){
            delete[] dp[i];
        }

        delete[] dp;
    }
    return 0;
}