#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

void nextPermutation(vector<int>& nums)
{
    int i,flag=0;
    int n = nums.size();
    for(i=n-1;i>0;i--)
    {
        if(nums[i] > nums[i-1]){
            flag=1;
            break;
        }
    }

    if(flag==0){
        for(int i=n-1;i>=0;i--)
            cout<<nums[i]<<" ";
        return;
    }

    int mini = INT_MAX;
    int index = -1;
    for(int j=n-1;j>=i;j--)
    {
        if(nums[j]>nums[i-1])
        {
            if(mini > nums[j])
            {
                mini = nums[j];
                index = j;
            }
        }
    }

    swap(nums[i-1],nums[index]);
    reverse(nums.begin()+i,nums.end());

    for(int j=0;j<n;j++)
            cout<<nums[j]<<" ";    
}

int main()
{
    vector<int> nums{1,4,5,4,3,1};
    nextPermutation(nums);
}