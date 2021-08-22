// O(n62)
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool find3Numbers(int A[], int n, int X)
    {
        sort(A, A+n);
        for(int i=0; i<n-2; i++)
        {
            int left = i+1, right = n-1;
            while(left < right)
            {
                if(A[i]+A[left]+A[right] == X)
                    return true;
                else if(A[i]+A[left]+A[right] < X)
                    left++;
                else
                    right--;
            }
        }
        return false;
    }
};

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
