// O(n x logn)
#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr + n);
        int ans = arr[n-1] - arr[0];
        for(int i=0; i<n-1; i++)
        {
            int add = max(arr[n-1]-k,arr[i]+k);
            int sub = min(arr[0]+k,arr[i+1]-k);
            ans = min(ans,add-sub);
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends