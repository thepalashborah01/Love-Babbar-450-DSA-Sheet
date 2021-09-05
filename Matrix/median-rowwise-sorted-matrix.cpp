#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int countSmallerthanMid(vector<int>& row, int mid)
    {
        int l = 0, h = row.size()-1;
        while(l <= h)
        {
            int md = (l+h)/2;
            if(row[md] <= mid)
                l = md+1;
            else
                h = md-1;
        }
        return l;
    }
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here    
        int low = 1, high = 1e9;
        while(low <= high)
        {
            int mid = (low+high)/2;
            int count = 0;
            for(int i=0; i<r; i++)
                count += countSmallerthanMid(matrix[i], mid);
            if(count <= (r*c)/2) 
                low = mid+1;
            else
                high = mid-1;
        }
        return low;
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