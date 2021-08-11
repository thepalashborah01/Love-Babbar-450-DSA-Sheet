#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& v)
{
    int slow = v[0];
    int fast = v[0];

    do{
        slow = v[slow];
        fast = v[v[fast]];
    }while(slow != fast);

    fast = v[0];
    while(slow != fast)
    {
        slow = v[slow];
        fast = v[fast];
    }
    return slow;
}

int main()
{
    int n; cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)
        cin>>nums[i];
    cout<<findDuplicate(nums);
    return 0;
}