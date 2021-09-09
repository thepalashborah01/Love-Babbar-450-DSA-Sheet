#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;
        
        while(start < end)
        {
            swap(s[start], s[end]);
            start++; end--;
        }
    }
};

int main()
{
    int n; cin>>n;
    vector<char> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];

    Solution obj;

    obj.reverseString(arr);

    for(int i=0; i<n; i++)
        cout<<arr[i];

    return 0;
}