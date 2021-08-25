// O(n)
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:

    int sb(int arr[], int n, int x)
    {
        int sum=0;
        int res=INT_MAX;
        int j=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>x)
            {
                while(sum>x)
                {
                    sum-=arr[j];
                    j++;
                }
                res=min(res,i-j+1);
            }
        }
        return res+1;
    }
};


int main() {

	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.sb(a,n,x)<<endl;
	}
	return 0;
}  