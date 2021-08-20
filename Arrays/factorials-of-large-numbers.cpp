//Done in O(n^2) TC
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> factorial(int n){
        int carry=0,val;
        vector<int>v;
        v.push_back(n);
        for(int i = n-1;i>=1;i--)
        {
            for(int j=0;j<v.size();j++)
            {
                val = v[j]*i + carry;
                v[j] = val%10;
                carry = val/10;
            }
            while(carry)
            {
                v.push_back(carry%10);
                carry=carry/10;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  