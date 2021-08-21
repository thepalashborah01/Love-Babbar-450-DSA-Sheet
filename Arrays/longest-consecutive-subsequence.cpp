// brute force : sorting the array, and checking if difference between consecutive numbers is 1 or not
//O(n logn)   O(1)
//optimised : using set O(n)  O(n)
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
  
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
        set<int> _s;
        for(int i=0; i<N; i++)
            _s.insert(arr[i]);
        
        int ans = INT_MIN;
        
        for(int i=0; i<N; i++)
        {
            if(_s.find(arr[i]-1) == _s.end())
            {
                int j = arr[i] + 1;
                while(_s.find(j) != _s.end())
                    j++;
                ans = max(ans, j-arr[i]);
            }
        }
        return ans;
    }
};

int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends