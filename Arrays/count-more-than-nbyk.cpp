//brute force : traversing for each element, and counting its frequency
//O(n^2)
//1st optimised : sorting and traversing in a single time while keeping count 
//O(n logn)
//2nd optimised : using map, and storing the element and its frequencies, and counting them
//O(n)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        int x = n/k, count = 0;
        
        unordered_map<int,int> frq;
        
        for(int i=0; i<n; i++)
            frq[arr[i]]++;
        for(auto i : frq)
        {
            if(i.second > x)
                count++;
        }
        return count;
    }
};

int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
