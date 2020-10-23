#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

int nextGap(int n)
{
    if(n<=1)
        return 0;
    return ceil(n/2.0);
}

// O((n+m)*log(m+n)) -> Time  O(1) -> space
void merge(int arr1[], int arr2[], int n, int m) 
{
	int gap=n+m;
    int i,j;
    for(gap=nextGap(gap);gap>0;gap=nextGap(gap))
    {
        for(i=0;i+gap < n;i++)
        {
            if(arr1[i] > arr1[i+gap])
                swap(arr1[i],arr1[i+gap]);
        }

        for(j=gap>n?gap-n:0;i<n && j<m;i++,j++)
        {
            if(arr1[i] > arr2[j])
                swap(arr1[i],arr2[j]);
        }

        if(j<m)
        {
            for(j=0;j+gap < m;j++)
            {
                if(arr2[j] > arr2[j+gap])
                    swap(arr2[j],arr2[j+gap]);
            }
        }
    }
}

// O(m+n) -> Time O(1) -> space
void merger(int arr1[],int arr2[],int n,int m)
{
    int mx = 0;
    for(int i=0;i<n;i++)
        mx = max(arr1[i],mx); 
    for(int i=0;i<m;i++)
        mx = max(arr2[i],mx);

    mx++;
    int i=0,j=0,k=0;
    while(i<n && j<m && k<(m+n))
    {
        int e1 = arr1[i] % mx;
        int e2 = arr2[j] % mx;

        if(e1<=e2)
        {
            if(k<n)
                arr1[k] += (e1 * mx);
            else
                arr2[k-n] += (e1 * mx);

            i++,k++;
        }else{
            if(k<n)
                arr1[k] += (e2 * mx);
            else
                arr2[k-n] += (e2 * mx);

            j++,k++;
        }
    }

    while (i<n)
    {
        int e1 = arr1[i]%mx;
        if(k<n)
            arr1[k] += (e1 * mx);
        else
            arr2[k-n] += (e1 * mx);

        i++,k++;
    }

    while (j<m)
    {
        int e1 = arr2[j]%mx;
        if(k<n)
            arr1[k] += (e1 * mx);
        else
            arr2[k-n] += (e1 * mx);

        j++,k++;
    }
    
    for(int i=0;i<n;i++)
        arr1[i] /= mx;
    
    for(int j=0;j<m;j++)
        arr2[j] /= mx;
}

int main()
{
    int a1[] = { 10, 27, 38, 43, 82 };
    int a2[] = { 3, 9 };
    int n = sizeof(a1) / sizeof(int);
    int m = sizeof(a2) / sizeof(int);
 
    // Function Call
    merger(a1, a2, n, m);
 
    printf("First Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a1[i]);
 
    printf("\nSecond Array: ");
    for (int i = 0; i < m; i++)
        printf("%d ", a2[i]);
    printf("\n");
    return 0;
}