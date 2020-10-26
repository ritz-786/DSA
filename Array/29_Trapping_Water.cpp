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
        vector<int> arr(n),left_max(n),right_max(n);

        int cur_max = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(cur_max < arr[i])
                cur_max = arr[i];
            left_max[i] = cur_max;
        }

        cur_max = 0;
        for(int i=n-1;i>=0;i--)
        {
            if(cur_max < arr[i])
                cur_max  =arr[i];
            right_max[i] = cur_max;
        }
        
        int capacity = 0;
        for(int i=0;i<n;i++)
        {
            capacity += min(left_max[i],right_max[i]) - arr[i];
        }
        
        cout<<capacity<<endl;
    }
}