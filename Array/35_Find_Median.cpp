#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

int median(vector<int> arr,int n)
{
    if(n%2==0)
        return (arr[n/2-1] + arr[n/2])/2;
    return arr[n/2];
}

int getMedian(vector<int> arr1,vector<int> arr2,int n)
{
    if(n<=0)
        return -1;
    if(n==1)
        return (arr1[0] + arr2[0])/2;
    if(n==2)
        return (max(arr1[0],arr2[0]) + min(arr1[1],arr2[1]))/2;

    int m1 = median(arr1,n);
    int m2 = median(arr2,n);

    if(m1==m2)
        return m1;

    if(m1<m2)
    {
        if(n%2==0)
        {
            return getMedian(vector<int> {arr1.begin() + n/2 -1,arr1.end()},arr2,n-n/2+1);
        }else{
            return getMedian(vector<int> {arr1.begin() + n/2,arr1.end()},arr2,n-n/2);
        }
    }

    if(n%2==0)
        return getMedian(vector<int> {arr2.begin() + n/2 -1 ,arr2.end()},arr1,n-n/2+1);
    else
        return getMedian(vector<int> {arr2.begin() + n/2,arr2.end()},arr1,n-n/2);
}

int main()
{
    int n;cin>>n;
    vector<int> arr1(n);
    vector<int> arr2(n);

    for(int i=0;i<n;i++)
        cin>>arr1[i];

    for(int i=0;i<n;i++)
        cin>>arr2[i];

    cout<<getMedian(arr1,arr2,n);
}