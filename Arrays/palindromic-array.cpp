#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}

int PalinArray(int a[], int n)
{  
    int count =0;
    for(int i =0;i<n;i++){
        string s1 = to_string(a[i]);
        int j = 0;
        int l = s1.length() -1;
        bool val = true;
        while(j<=l){
            if(s1[j++] != s1[l--])
            val = false;
        }
        if(val == true) count++;
    }
    if(count == n) return 1;
    else return 0;
}