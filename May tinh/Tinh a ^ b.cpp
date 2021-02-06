#include<bits/stdc++.h>
double LT(double A, int a,int b)
{
	if(b<=0) return A;
	else {
		A=a*LT(A,a,b-1);
		return A;	
	}
}
int main()
{
	int n,k;
	double A=1;
	printf("Nhap co so: ");
	scanf("%d",&n);
	printf("Nhap so mu: ");
	scanf("%d",&k);	
	printf("\n %d^%d = %.0lf",n,k,LT(A,n,k));
}

