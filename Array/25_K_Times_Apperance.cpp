#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

struct Ele {
    int x;
    int c;
};

// find all elements that appear more than n/k times
int main()
{
    vector<int> arr{3,1,2,2,2,1,4,3,3,2,2,4,4};
    int k=3;

    int n = arr.size();
    vector<Ele> elements(k-1);

    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<k-1;j++)
        {
            if(arr[i] == elements[j].x)
            {
                elements[j].c++;
                break;
            }
        }

        if(j==k-1)
        {
            int l;
            for(l=0;l<k-1;l++)
            {
                if(elements[l].c == 0)
                {
                    elements[l] = {arr[i],1};
                    break;
                }
            }

            if(l==k-1)
            {
                for(l=0;l<k-1;l++)
                    elements[l].c-=1;
            }
        }
    }

    // all elements will be candidate elements
    for(int i=0;i<k-1;i++)
    {
        int cnt = 0;
        for(int j=0;j<n;j++)
        {
            if(elements[i].x == arr[j])
                cnt++;
        }

        if(cnt > n/k)
            cout<<elements[i].x<<" came "<<cnt<<" times"<<endl;
    }
}