#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

int main()
{
    // Consider this question as sorting 0,1,2
    int n;cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int a,b;cin>>a>>b;
    int l=0,m=0,h=n-1;
    while(m<=h)
    {
        if(arr[m] < a)
        {
            swap(arr[l],arr[m]);
            l++;
            m++;
        }else if(arr[m] >=a && arr[m] <= b)
        {
            m++;
        }else if(arr[m] > b){
            swap(arr[m],arr[h]);
            h--;
        }
    }

    for(int x: arr)
        cout<<x<<" ";
}