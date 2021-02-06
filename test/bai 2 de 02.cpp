#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
typedef struct
{
	char Ten[50];
	float Luong;
	int MCV;
}Nhanvien;
Nhanvien *doctep(int *n,FILE *f=stdin)
{
	int i;
	fscanf(f,"%d\n",n);
	Nhanvien *A=(Nhanvien *)calloc(*n,sizeof(Nhanvien));
	for(i=0;i<*n;i++) 
	{
		fscanf(f,"%[^\n]",&A[i].Ten);
		fscanf(f,"%f",&A[i].Luong);
		fscanf(f,"%d",&A[i].MCV);
		fscanf(f,"\n");
		
	}
	return A;
}
void xuat(int n,Nhanvien *A)
{
	printf("So nhan vien : %d",n);
	for(int i=0;i<n;i++)	printf("\nHo va Ten: %-20s\nLuong: %.2f\nMCV: %d\n",A[i].Ten,A[i].Luong,A[i].MCV);
}
void sapxep(int n,Nhanvien *A)
{
	float B;
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	{
		if(A[i].Luong<A[j].Luong)
		{
			Nhanvien B=A[i] ; A[i]=A[j] ; A[j]=B;
		}
	}
	xuat(n,A);
}
int main()
{
	FILE *f;
	Nhanvien *A=NULL;
	char tep[50];
	int n;
	printf("ten tep: ");gets(tep);
	f=fopen(tep,"rt");
	A=doctep(&n,f);
	xuat(n,A);
	sapxep(n,A);
}





