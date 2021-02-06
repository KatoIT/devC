#include<bits/stdc++.h>
double GT(int a)
{
	double B=1;
	for(int i=0;i<a;i++)
	B*=a-i;
	return B;
}
int main()
{
	int i,n,k;
	double A=0;
	printf("Nhap vao N va K: ");
	scanf("%d%d",&n,&k);
	A=GT(n)/GT(n-k);
	printf("\n %d P %d = %lf",n,k,A);
}

