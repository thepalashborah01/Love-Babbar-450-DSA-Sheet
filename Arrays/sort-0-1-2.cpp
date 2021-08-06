//simple approach : count the number of 0s, 1s and 2s and store them from beginning
// O(n) | O(1)

#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n)
{
    int i, c0=0, c1=0, c2=0;
    for(i=0; i<n; i++)
    {
        if(arr[i] == 0)
            c0++;
        else if (arr[i] == 1)
            c1++;
        else   
            c2++;
    }
    i = 0; //updating i
    while(c0 > 0)
    {
        arr[i] = 0;
        c0--; i++;
    }

    while(c1 > 0)
    {
        arr[i] = 1;
        c1--; i++;
    }

    while(c2 > 0)
    {
        arr[i] = 2;
        c2--; i++;
    }

    for(int j=0; j<n; j++)
        cout<<arr[j]<<" ";
    cout<<endl;
}
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i]; //input only in 0s, 1s and 2s

    sort012(arr, n);
    return 0;
}