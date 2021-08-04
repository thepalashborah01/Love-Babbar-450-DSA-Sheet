//1st approach : sorting the array and printing the first and the last element of the array
//O(nlogn)

//2nd approach : linear search
#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int max;
    int min;
};

void getminmax(int arr[], int n)
{
    struct Pair minmax;
    int i;

    //if size of array is 1
    if(n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
    }
    //initializing
    if(arr[0]>arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    //traversing linearly
    for(i=2; i<n; i++)
    {
        if(arr[i] > minmax.max)
            minmax.max = arr[i];
        else if (arr[i] < minmax.min)
            minmax.min = arr[i];
    }
    cout<<"Maximum element : "<<minmax.max<<endl;
    cout<<"Minimum element : "<<minmax.min<<endl;

}
int main()
{
    int size;cin>>size;
    int arr[size];
    for(int i=0; i<size; i++)
        cin>>arr[i];

    getminmax(arr, size);

    return 0;
}