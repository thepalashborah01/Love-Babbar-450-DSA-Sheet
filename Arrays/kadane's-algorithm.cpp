#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int maxSum = INT_MIN;
        int currSum = 0;
        for(int i=0; i<n; i++)
        {
            currSum +=arr[i];
            if(currSum < 0)
                currSum = 0;
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
        
    }
};

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        cout << ob.maxSubarraySum(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends