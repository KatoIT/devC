#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<string.h>

void doctep(FILE *f, int *n,int *m,int *a)
{
	int i,j;
	fscanf(f,"%d%d",m,n);
	for(i=0;i<*m;i++)
	for(j=0;j<*n;j++)
	fscanf(f,"%d",a+i*50+j);
}
void xuat(int n,int m,int a[][50])
{
	int i,j;
	printf("Ma tran trong tep la: \n");
	for(i=0;i<m;i++)
	{{for(j=0;j<n;j++)	printf("%4d",a[i][j]);}printf("\n");}
}
float TBC(int a[][100],int n,int m)
{
	int i,j,d=0,s=0;
	float TB;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		if( a[i][j]%2==0 || (a[i][j]-1)%3==0 ) { d++;s+=a[i][j];} 
	}
	TB=s/d;
	return TB;
}
int Tong(int a[][50],int n,int m)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		int S=0;
		for(j=0;j<n;j++)	S+=a[i][j];
		printf("Tong hang thu %d la: %d",i,S);
	}
}
void ghitep(FILE *f,int n,int m,int a[][50])
{
	int i,j;
	for(i=0;i<m;i++)
	{{for(j=0;j<n;j++)	fprintf(f,"%4d",a[i][j]);}fprintf(f,"\n");}
}
int main()
{
	FILE *f1,*f2;
	char tep1[50],tep2[50];
	int m,n,a[50][50],i,j;
	printf("Tep doc du lieu:");gets(tep1);
	printf("Tep ghi du lieu:");gets(tep2);
	f1=fopen(tep1,"rt");
	f2=fopen(tep2,"wt");
	doctep(f1,&n,&m,(int*)a);
	xuat(n,m,a);
	Tong(a,n,m);
	ghitep(f2,n,m,a);
}
