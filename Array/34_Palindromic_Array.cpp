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

        int i=0,j=n-1;
        int ans=0;
        while(i<=j)
        {
            if(arr[i]==arr[j])
            {
                i++;
                j--;
            }else if(arr[i]>arr[j]){
                j--;
                arr[j]+=arr[j+1];
                ans+=1;
            }else{
                i++;
                arr[i]+=arr[i-1];
                ans+=1;
            }
        }

        cout<<ans<<endl;

        for(int x: arr)
            cout<<x<<" ";
    }
}