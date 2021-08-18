#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void nextPermutation(vector<int>& nums)
    {
        int len = nums.size();
        if(len <=1)
            return;
        int i = len-2;
        while(i>=0 && nums[i] >= nums[i+1])
            i--;
        if(i>=0)
        {
            int j = len-1;
            while(nums[j] <= nums[i])
                j--;
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin()+i+1, nums.end());
        //printing
        for(int i=0; i<len; i++)
            cout<<nums[i]<<" ";
    }
};

int main()
{
    int size; cin>>size;
    vector<int> numbers(size);
    for(int i=0; i<size; i++)
        cin>>numbers[i];

    Solution obj;
    obj.nextPermutation(numbers);
    return 0;
}