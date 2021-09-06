#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int median(vector<vector<int>>& ans, int r, int c)
    {
        int min = INT_MIN, max = INT_MAX;
        for(int i=0; i<r; i++)
        {
            if(ans[i][0] < min)
                min = ans[i][0];
            
            if(ans[i][c-1] > max)
                max = ans[i][c-1];
        }

        int desired = (r*c+1)/2;

        while(min < max)
        {
            int mid = min + (max-min) /2;
            int place = 0;

            for(int i=0; i<r; i++)
                place += upper_bound(ans[i].begin(), ans[i].end(), mid) - ans[i].begin();
            if(place < desired)
                min = mid+1;
            else
                max = mid-1; 
        }
        return min;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
} 