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
int optimised(int a1[], int a2[], int n1, int n2)//using binary search
{
    if(n1 > n2)
        return optimised(a1, a2, n2, n1);
    int low = 0, high = n1;

    while(low <= high)
    {
        int cut1 = (low+high)/2;
        int cut2 = (n1+n2+1)/2 - cut1;

        int left1 = cut1 == 0 ? INT_MIN : a1[cut1-1];
        int left2 = cut2 == 0 ? INT_MIN : a2[cut2-1];

        int right1 = cut1 == n1 ? INT_MAX : a1[cut1];
        int right2 = cut2 == n2 ? INT_MAX : a2[cut2];

        if(left1 <= right2 && left2 <= right1)
        {
            if((n1+n2)%2==0)
            {
                return (max(left1, left2) + min(right1, right2));
            }
            else
                return max(left1, left2);
        }
        else if (left1 > right2)
            high = cut1 - 1;
        else    
            low = cut1 + 1;
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

    cout<<optimised(arr1, arr2, n, m);
    return 0;
}