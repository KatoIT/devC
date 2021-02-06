#include<iostream>
using namespace std;
#include<math.h>

int main()
{
	int n,m,a[51],i,j,t,Min;

	cin>>n>>m;
	for(i=0;i<m;i++) cin>>a[i];
	
	for(i=0;i<m-1;i++) 
		for(j=i+1;j<m;j++) if(a[i]>a[j]) 
		{
			t=a[i];a[i]=a[j];a[j]=t;
		}
	Min=a[n-1]-a[0];
	if(m==n) Min=a[n-1]-a[0];
	else
	{
		for(i=0;i<(m-n);i++) 
		if((a[i+n]-a[i+1])<=Min) Min=a[i+n]-a[i+1];
	}
	cout<<Min;
}

