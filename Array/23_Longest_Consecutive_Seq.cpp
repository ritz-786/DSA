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
        unordered_map<int,int> m;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]=1;
        }

        for(int i=0;i<n;i++)
        {
            if(m.find(arr[i]-1)!=m.end())
            {
                m[arr[i]]= -1;
            }
        }

        int ans = 0;

        for(int i=0;i<n;i++)
        {
            if(m[arr[i]]==1)
            {
                int len=1;
                while(m.find(arr[i]+len)!=m.end())
                {
                    len++;
                }
                ans = max(ans,len);
            }
        }

        cout<<ans<<endl;
    }
}