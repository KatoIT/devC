#include<iostream>
using namespace std;
#include<math.h>

long Min(int a,int b,int c)
{
	long A=0;
	A=c*a*(a-1)+b*a*(a+1);
	return A/2;
}
long Max(int n,int m)
{
	int A=0;
	A=(n-m+1)*(n-m);
	return A/2;
}
int main()
{
	int m,n,a,b,c;
	long k,h;
	cin>>n>>m;
	a=int(n/m);
	b=n%m;
	c=m-b;
	k=Min(a,b,c);
	h=Max(n,m);
	cout<<k<<" "<<h;
	return 0;
}
