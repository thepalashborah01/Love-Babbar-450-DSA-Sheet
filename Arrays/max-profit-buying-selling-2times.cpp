#include<bits/stdc++.h>
using namespace std;

int maxprofitafter2(int price[], int n)
{
    int* profit = new int[n];
    for(int i=0; i<n; i++)
        profit[i] = 0;
    int maxPrice = price[n-1];
    for(int i=n-2; i>=0; i--)
    {
        if(price[i] > maxPrice)
            maxPrice = price[i];
        profit[i] = max(profit[i+1], maxPrice - price[i]);
    }
    int min_price = price[0];
    for (int i = 1; i < n; i++) {
        if (price[i] < min_price)
            min_price = price[i];
        profit[i] = max(profit[i - 1],profit[i] + (price[i] - min_price));
    }
    int result = profit[n - 1];
    delete[] profit; 
 
    return result;
}
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    cout<<maxprofitafter2(arr, n);

    return 0;
}