#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

// https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together/0

int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int n;cin>>n;
        vector<int> arr(n);

        for(int i=0;i<n;i++)
            cin>>arr[i];

        int k;cin>>k;
        
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] <= k)
                cnt++;
        }

        int bad=0;
        for(int i=0;i<cnt;i++)
        {
            if(arr[i]>=k)
                bad++;
        }

        int ans = bad;
        for(int i=0,j=cnt;j<n;i++,j++)
        {
            if(arr[i]>k)
                bad--;
            if(arr[i]>k)
                bad++;

            ans = min(ans,bad);
        }

        cout<<ans<<endl;
    }
}