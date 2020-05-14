#include <iostream>
using namespace std;
int bin(int a[],int l,int h,int x)
{
    if(l<=h)
    {
        int mid = l + (h - l) / 2;
        if(a[mid]==x)
        {
            return 1;
        }
        else if(a[mid]>x)
        {
            return bin(a,l,mid-1,x);
        }
        else{
            return bin(a,mid+1,h,x);
        }
    }
    return -1;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	   int n,k;
	   cin>>n>>k;
	   int a[n];
	   for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<bin(a,0,n-1,k)<<endl;
	    
	}
	return 0;
}
