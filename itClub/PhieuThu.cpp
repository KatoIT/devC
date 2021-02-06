#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	double val = 0;
	if(a==1) val = b*4;
	if(a==2) val = b*4.5;
	if(a==3) val = b*5;
	if(a==4) val = b*2;
	if(a==5) val = b*1.5;
	printf("Tong: R$ %.2lf",val);
}

