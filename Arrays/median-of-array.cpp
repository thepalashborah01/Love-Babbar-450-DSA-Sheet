#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int oddeven(int n)
    {
        if(n%2==0)//even
            return 1;
        else//odd
            return 0;
    }
	int find_median(vector<int> v)
	{
	    sort(v.begin(), v.end());
	    int size = v.size();
	    int op = oddeven(size);
	    if(op == 1)//even
	    {
	        int one = v[(size/2)-1];
	        int two = v[(size/2)];
	        return (one+two)/2;
	    }
	    else
	        return v[size/2];
	}
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}
