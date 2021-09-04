#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    int r=0, c=M-1;
        int found = 0;
        while(r<N && c>=0)
        {
            if(mat[r][c] == X)
                found = 1;
            if(mat[r][c] > X)
                c--;
            else
                r++;
        }
        if(found == 0)
            return 0;
        else
            return 1;
	}
};


int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}  