#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

int main()
{
    vector<int> prices{2,5,7,1,4,3,1,3};
    int k = 3; // Atmost Number of Transactions

    int n=prices.size();
    int dp[k+1][n];

    memset(dp,0,sizeof(dp));

    for(int i=0;i<=k;i++)
    {
        int maxdiff = INT_MIN;
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else
            {
                maxdiff = max(maxdiff,dp[i-1][j-1] - prices[j-1]);
                dp[i][j] = max(dp[i][j-1],maxdiff + prices[j]);
            }
        }
    }

    for(int i=0;i<=k;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}