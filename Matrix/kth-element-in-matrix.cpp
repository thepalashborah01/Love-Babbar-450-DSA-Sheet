#include<bits/stdc++.h>
using namespace std;

#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    priority_queue<int,vector<int>,greater<int>> p;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            p.push(mat[i][j]);
        }
    }
    if(k==1)
    {
        return p.top();
    }
    for(int i=0;i<k-1;i++)
    {
        p.pop();
    }
    int res=p.top();
    return res;
    
}
