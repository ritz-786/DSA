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
        ll n;cin>>n;
        vector<ll> v(n,0);
        for(int i=0;i<n;i++)
            cin>>v[i];

        // if v[0]=0, then no possible way
        if(v[0]==0)
        {
            cout<<-1<<" ";
            return 0;
        }

        vector<ll> steps(n,INT_MAX);
        steps[0]=0;

        for(ll i=1;i<n;i++)
        {
            for(ll j=i-1;j>=0;j--)
            {
                if(v[j]+j>=i)
                    steps[i] = min(steps[i],steps[j]+1);
            }
        }

        // for(ll x: steps)
        //     cout<<x<<" ";

        cout<<steps[n-1]<<" ";
    }
}