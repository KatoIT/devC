#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
typedef struct
{
	char TS[100],TTS[50];
	int NXB;
}Thuvien;
Thuvien *doctep(int *n,FILE *f=stdin)
{
	int i;
	fscanf(f,"%d\n",n);
	Thuvien *A=(Thuvien*)calloc(*n,sizeof(Thuvien));
	for(i=0;i<*n;i++)
	{
		fscanf(f,"%[^\n]\n",&A[i].TS);
		fscanf(f,"%[^\n]\n",&A[i].TTS);
		fscanf(f,"%d\n",&A[i].NXB);
		
	}
	return A;
}
void tim(Thuvien *A,int n,FILE *f=stdout)
{
	int i,d=0;
	char TenS[100];
	printf("Ten sach can tim:");gets(TenS);
	fprintf(f,"Sach can tim:");
	for(i=0;i<n;i++)
	if(strcmp(A[i].TS,TenS)==0)
	{
		d=1;
		fprintf(f,"\n%s\n%s\n%d",A[i].TS,A[i].TTS,A[i].NXB);
	}
	if(d==0) fprintf(f,"Khong co\n");
}
void sapxep(int n,Thuvien *A,FILE *f=stdout)
{
	int i,j,h;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
		if(A[i].NXB<A[j].NXB) 
		{
			Thuvien h=A[i]; A[i]=A[j]; A[j]=h;
		}
	}
	fprintf(f,"\nDanh sach xuat ban truoc nam 2000:");
	for(i=0;i<n;i++)	if(A[i].NXB<2000) fprintf(f,"\n%s\n%s\n%d\n",A[i].TS,A[i].TTS,A[i].NXB);
}
main()
{
	FILE *f1,*f2;
	Thuvien *A;
	int n,i;
	f1=fopen("input.txt","rt");
	f2=fopen("output.txt","wt");
	A=doctep(&n,f1);
	tim(A,n,f2);
	sapxep(n,A,f2);
}

