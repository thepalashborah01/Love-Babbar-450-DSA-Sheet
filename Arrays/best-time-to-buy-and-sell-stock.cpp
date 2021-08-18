#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        
        int maxProfit = 0;
        int minsofar = prices[0];
        
        for(int i=0; i<len; i++)
        {
            minsofar = min(minsofar, prices[i]);
            int profit = prices[i] - minsofar;
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
    }
};

int main()
{
    int n; cin>>n;
    vector<int> prices(n);
    for(int i=0; i<n; i++)
        cin>>prices[i];
    
    Solution obj;
    cout<<obj.maxProfit(prices);
    
    return 0;
}