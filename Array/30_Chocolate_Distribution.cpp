#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int n;cin>>n;
        vector<int> arr(n);

        for(int i=0;i<n;i++)
            cin>>arr[i];

        sort(arr.begin(),arr.end());

        int k;cin>>k;
        if(k>n)
        {
            cout<<0<<endl;
            return 0;
        }

        int ans=INT_MAX;
        for(int i=k-1;i<n;i++)
        {
            ans = min(ans,arr[i]-arr[i-(k-1)]);
        }

        cout<<ans<<endl;
    }
}