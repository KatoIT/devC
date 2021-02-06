#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
typedef struct
{
	float x,y;
}Diem;
Diem *doctep(int *n,FILE *f=stdin)
{
	int i;
	fscanf(f,"%d",n);
	Diem *A=(Diem*)calloc(*n,sizeof(Diem));
	for(i=0;i<*n;i++)	fscanf(f,"%f%f",&A[i].x,&A[i].y);
	return A;
}
int P1(int n,Diem *A)
{
	int i,B,d1=0,d2=0;
	for(i=0;i<n;i++)
	{
		B=pow(A[i].x,2)+pow(A[i].y,2);
		if(B<25) d1++;	
		if(B==25) d2++;	
	}
	printf("So diem nam trong la: %d",d1);
	printf("\nSo diem nam ngoai la: %d",n-d2-d1);
}
int P2(int n,Diem *A)
{
	int i,C,d=0,k;
	for(i=0;i<n;i++)
	{
		C=pow(A[i].x,2)+pow(A[i].y,2);
		if(C<=25) d++;		
	}
	k=d*(d-1)/2;
	return k;
}
main()
{
	FILE *f;
	char tep[50];
	int n,i,h,d1,d2;
	Diem *A;
	printf("Tep du lieu:");gets(tep);
	f=fopen(tep,"rt");
	A=doctep(&n,f);
	P1(n,A);
	printf("\nSo doan thang ben trong la: %d",P2(n,A));
	
}
