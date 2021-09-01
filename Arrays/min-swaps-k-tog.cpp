#include <bits/stdc++.h>
using namespace std;


int minSwap(int *arr, int n, int k);

int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        cout << minSwap(arr, n, k) << "\n";
    }
	return 0;
}

int minSwap(int *arr, int n, int k) {
    // Complet the function
    int lessk = 0, morek = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] <= k)
            lessk++;
    }
    for(int i=0; i<lessk; i++)
    {
        if(arr[i] > k)
            morek++;
    }
    int ans = morek;
    for(int i=0, j=lessk; j<n; i++,j++)
    {
        if(arr[i] > k)
            morek--;
        if(arr[j] > k)
            morek++;
        ans = min(ans, morek);
    }
    return ans;
};
