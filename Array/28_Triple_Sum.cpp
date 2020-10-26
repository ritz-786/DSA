#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

bool poss(vector<int> arr,int x)
{
    sort(arr.begin(),arr.end());
    int n = arr.size();
    for(int i=0;i<n-2;i++)
    {
        int j,k;
        j=i+1;
        k=n-1;
        while(j<k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if(sum == x)
                return true;
            if(sum < x)
                j++;
            else
                k--;
        }
    }
    return false;
}

int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int n,x;
        cin>>n>>x;

        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        cout<<poss(arr,x)<<endl;
    }
}