#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0)
            return false;
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int low = 0, high = (n*m)-1;
        
        while(low <= high)
        {
            int mid = (low+high)/2;
            if(matrix[mid/m][mid%m] ==  target)
                return true;
            else if (matrix[mid/m][mid%m] > target)
                high = mid-1;
            else
                low = mid+1;
        }
        return false;
    }
};

int main()
{
    int n, m;
    cin>>n>>m;
    vector <vector <int>> arr (n, vector <int> (m));
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            cin >> arr[i][j];
    
    int x; cin >> x;
    Solution ob;
    cout << ob.searchMatrix (arr, x) << endl;
}