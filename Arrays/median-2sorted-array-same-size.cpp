#include<bits/stdc++.h>
using namespace std;

int bruteforceapproach(int a1[], int a2[], int n) //O(n)
{
    int i=0, j=0;
    int m1 = -1, m2 = -1;
    int count;
    for(count=0; count<=n; count++)
    {
        if(i == n)
        {
            m1 = m2;
            m2 = a2[0];
            break;
        }
        else if(j == n)
        {
            m1 = m2;
            m2 = a1[0];
            break;
        }
        if(a1[i] <= a2[j])
        {
            m1 = m2;
            m2 = a1[i];
            i++;
        }
        else
        {
            m1 = m2;
            m2 = a2[j];
            j++;
        }
    }
    return (m1+m2)/2;
}
int median(int arr[], int n)
{
    if (n % 2 == 0)
        return (arr[n / 2] + arr[n / 2 - 1]) / 2;
    else
        return arr[n / 2];
}
int optimised(int a1[], int a2[], int n)//O(logn)
{
    if(n <= 0)
        return -1;
    if(n == 1)
        return (a1[0]+a2[0])/2;
    if(n == 2)
        return (max(a1[0], a2[0]) + min(a1[1], a2[1]))/2;
    
    int m1 = median(a1, n);
    int m2 = median(a2, n);

    if(m1 ==  m2)
        return m1;
    
    if(m1 < m2)
    {
        if(n%2 == 0)
            return optimised(a1+n/2-1, a2, n-n/2+1);
        return optimised(a1+n/2, a2, n-n/2);
    }
    if(n%2 == 0)
        return optimised(a2+n/2-1, a1, n-n/2+1);
    return optimised(a2+n/2, a1, n-n/2);
}

int main()
{
    int n; cin>>n;
    int arr1[n], arr2[n];
    for(int i=0; i<n; i++)
        cin>>arr1[i];
    for(int i=0; i<n; i++)
        cin>>arr2[i];

    cout<<bruteforceapproach(arr1, arr2, n);
    // int ans = optimised(arr1, arr2, n);
    // cout<<ans;
    return 0;
}