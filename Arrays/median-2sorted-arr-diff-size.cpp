#include<bits/stdc++.h>
using namespace std;

int bruteforce(int a1[], int a2[], int n, int m)//O(n)
{
    int i=0, j=0;
    int count;
    int m1=-1, m2=-1;

    if((n+m)%2 == 1)//total size is odd
    {
        for(count=0; count<(n+m)/2; count++)
        {
            if(i!=n && j!=m)
                m1 = a1[i] > a2[j] ? a2[j++] : a1[i++];
            else if (i < n)
                m1 = a1[i++];
            else    
                m1 = a2[j++];
        }
        return m1;
    }
    else//total size even
    {
        for(count=0; count<(n+m)/2; count++)
        {
            m2 = m1;
            if(i != n && j != m)
                m1 = (a1[i] > a2[j]) ? a2[j++] : a1[i++];
            else if(i < n)
                m1 = a1[i++];
            else
                m1 = a2[j++];
        }
        return (m1 + m2)/2;
    }
}
int main()
{
    int n, m; cin>>n>>m;
    int arr1[n], arr2[n];
    for(int i=0; i<n; i++)
        cin>>arr1[i];
    for(int i=0; i<m; i++)
        cin>>arr2[i];
    cout<<bruteforce(arr1, arr2, n, m);
    return 0;
}