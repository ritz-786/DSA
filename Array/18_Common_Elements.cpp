#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
    int i=0,j=0,k=0;
    vector<int> ans;
    int prev = INT_MIN;
    while(i<n1 && j<n2 && k<n3)
    {
        if(A[i] == B[j] && B[j] == C[k] )
        {
            if(A[i]!=prev)
                ans.push_back(A[i]);
            prev = A[i];
            i++;
            j++;
            k++;
        }else
        {
            int mx = max(A[i],max(B[j],C[k]));
            if(A[i]<mx)
                i++;
            if(B[j]<mx)
                j++;
            if(C[k]<mx)
                k++;
        }
    }
    return ans;
}

int main()
{
    // int n1=6,n2=5,n3=8;
    // int A[] = {1, 5, 10, 20, 40, 80};
    // int B[] = {6, 7, 20, 80, 100};
    // int C[] = {3, 4, 15, 20, 30, 70, 80, 120};

    int n1=3,n2=3,n3=3;
    int A[] = {3,3,3};
    int B[] = {3,3,3};
    int C[] = {3,3,3};

    vector<int> ans = commonElements(A,B,C,n1,n2,n3);
    for(int x: ans)
        cout<<x<<" ";
}