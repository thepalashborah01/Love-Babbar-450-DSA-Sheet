// O(n) store the last element in a temporary int, and bring all the number ahead by one, and place the temp at first;
#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n);

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n] , i;
        for(i=0;i<n;i++)
            cin>>a[i];

        rotate(a, n);

        for (i = 0; i < n; i++)
            cout<<a[i];
        cout<<"\n";
    }
    return 0;
}
void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i=n-1; i>0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}