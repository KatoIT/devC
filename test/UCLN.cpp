#include<iostream>
using namespace std;
#include<math.h>
int UCLN(int a,int b)
{
	int k=0;
	if(a*b==0) k=a+b;
	else
	{
		a=abs(a);b=abs(b);
		(a>b)?a=a%b:b=b%a;
		k=UCLN(a,b);
	} 
	return k;
}
int main()
{
	int a,b,k;
	cout<<"Nhap a: ";cin>>a;
	cout<<"Nhap b: ";cin>>b;
	cout<<UCLN(a,b);;
}

