//brute force : using linear iteration, which would take n square time complexity
//using merge sort : 
// O(n logn )
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
 
    long long int merge(long long arr[], long long temp[], long long left, long long mid, long long right)
    {
        long long i, j, k;
        long long count = 0;
        
        i = left; j = mid; k = left;
        
        while((i <= mid-1) && (j <= right))
        {
            if(arr[i] <= arr[j])
                temp[k++] = arr[i++];
            else
            {
                temp[k++] = arr[j++];
                count = count + (mid-i);
            }
        }
        while(i <= mid-1)
            temp[k++] = arr[i++];
        while(j <= right)
            temp[k++] = arr[j++];
        for(i=left; i<=right; i++)
            arr[i] = temp[i];
            
        return count;
    }
    long long int mergeSort(long long arr[], long long temp[], long long low, long long high)
    {
        long long mid, count = 0;
        if(high > low)
        {
            mid = (high+low)/2;
            
            count += mergeSort(arr, temp, low, mid);
            count += mergeSort(arr, temp, mid+1, high);
            
            count += merge(arr, temp, low, mid+1, high);
        }
        return count;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        long long temp[N];
        long long ans = mergeSort(arr, temp, 0, N-1);
    }

};

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
