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
        int n,x;cin>>n>>x;
        vector<int> arr(n);

        for(int i=0;i<n;i++)
            cin>>arr[i];

        int i=0,j=0;
        int sum = 0;
        int len = INT_MAX;
        while(j<=n)
        {
            if(j<n)
                sum+=arr[j];
            // cout<<"sum: "<<sum<<" "<<"len: "<<len<<endl;
            while(sum>x)
            {
                len = min(len,j-i+1);
                sum-=arr[i];
                i++;
            }
            j++;
        }
        cout<<len<<endl;
    }
}