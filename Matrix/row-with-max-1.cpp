#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int j = m-1;
	    while(j>=0 && arr[0][j] == 1)
	        j--;
	    int ans = 0;
	    for(int i=0; i<n; i++)
	    {
	        while(j>=0 && arr[i][j] == 1)
	        {
	            j--;
	            ans = i;
	        }
	    }
	    if(j == m-1)
	        return -1;
	    return ans;
	}

};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
