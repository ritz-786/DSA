#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

int main()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    int k;cin>>k;
    sort(v.begin(),v.end());

    int small = v[0] + k;
    int big = v[n-1] - k;

    int ans = v[n-1] - v[0];

    for(int i=1;i<n-1;i++)
    {
        int sub = v[i] - k;
        int add = v[i] + k;

        // checking for a new set of small and big number
        if(!(sub < small && add > big))
            continue;

        if((big-sub) <= (add-small))
            small = sub;
        else
            big = add;
    }

    cout<<min(ans,(big-small));
}