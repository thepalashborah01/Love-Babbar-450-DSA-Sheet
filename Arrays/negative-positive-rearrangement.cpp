//two pointer approach
//O(n) | O(1)

#include<bits/stdc++.h>
using namespace std;

void rearrangeposneg(int arr[], int n)
{
    int left = 0, right = n-1;
    while(left <= right)
    {
        if(arr[left]<0 && arr[right]<0)
        {
            left++;
            
        }
        else if(arr[left]>0 && arr[right]<0)
        {
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++; right--;
        }
        else if(arr[left]>0 && arr[right]>0)
            right--;
    }

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    rearrangeposneg(arr, n);
    return 0;
}