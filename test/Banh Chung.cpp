#include"iostream"
using namespace std;
#include"math.h"

int Input(int n, int a[])
{
	int i;
	for(i=0;i<n;i++) cin>>a[i];
}
int BC(int n,int a[])
{
	int i,k=0,b1,b2,d1=0,d2=0,d3=0,d4=0;
	for(i=0;i<n;i++) 
	{
		if(a[i]==1) d1++;
		if(a[i]==2) d2++;
		if(a[i]==3) d3++;		
		if(a[i]==4) d4++;		
	}
	b1=d2%2;
	if(d3>=d1) k=d4+d3+d2/2+b1;
	else 
	{
		b2=d1-d3-b1*2;
		if(b2%4==0) k=d4+d3+d2/2+b1+b2/4;
		else  k=d4+d3+d2/2+b1+b2/4+1;
	}
	return k;
}
int main()
{
	int n,k,i;
	int a[100];
	cin>>n;
	Input(n,a);
	for(i=0;i<n;i++) if(a[i]<1||a[i]>4) 
	{
		cout<<"error";return 0;
	}
	k=BC(n,a);
	cout<<k;
	return 0;
}
