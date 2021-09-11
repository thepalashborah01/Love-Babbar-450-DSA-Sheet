#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	    bool check = 1;
	    int l = 0;
        while(S[l] != 0)
        {
            l++;
        }
        //int l = count;
        for(int i=0; i<l; i++)
        {
            if(S[i] != S[l-1-i])
            {
                check = 0;
                break;
            }
        }
        if(check)
            return 1;
        else
            return 0;
	}

};


int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
}  