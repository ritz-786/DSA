#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

int main()
{
    vector<int> arr{-5, 3, 4, 5, -6, -2, 8, 9, -1, -4};
    int n = arr.size();
    int i=0,j=n-1;
    while (i<j)
    {
        while(i<n and arr[i]>0)
            i+=1;
        while(j>=0 and arr[j]<0)
            j-=1;
        if(i<j)
            swap(arr[i],arr[j]);
    }
    
    if(i==0 || i==n)
    return 0;

    int k =0;
    while(k<n && i<n)
    {
        swap(arr[k],arr[i]);
        i+=1;
        k+=2;
    }

    for(int x: arr)
        cout<<x<<" ";
}