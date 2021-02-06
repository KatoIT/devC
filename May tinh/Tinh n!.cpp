#include<bits/stdc++.h>
double GT(double A, int a)
{
	if(a<=1) return A;
	else {
		A=a*GT(A,a-1);
		return A;	
	}
}
int main()
{
	int i,n;
	double A=1;
	printf("Nhap vao N: ");
	scanf("%d",&n);
	printf("\n %d! = %.0lf",n,GT(A,n));
}

