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
Diem *Doctep(int *n,FILE *f=stdin)
{
	int i;
	fscanf(f,"%d",n);
	Diem *A=(Diem *)calloc(*n,sizeof(Diem));  //cap phat bo nho dong
	for(int i=0;i<*n;i++) fscanf(f,"%f%f",&A[i].x,&A[i].y);

	return A;
}
float kc(int a,Diem *A) 
{ 
	float H;
	H=A[a].x*A[a].x+A[a].y*A[a].y;
	return H;
}
void Max(int *n, Diem *A)
{
	int i,k;
	float Max=0,B;
	for(i=0;i<*n;i++) 
	{
		B=kc(i,A);
		if(Max<B) Max=B;
	}
	printf("\ndiem xa O nhat la:");
	for(i=0;i<*n;i++) if(Max==kc(i,A)) printf("\n%.2f  %.2f",A[i].x,A[i].y);
	
}
int gpt(int *n,Diem *A)
{
	int i,d=0,C=0;
	for(i=0;i<*n;i++)	if(A[i].x<=0 && A[i].y<=0) d++;
	C=d*(d-1)/2;
	return C;
}	
int main()
{
	FILE*f;
	Diem *A=NULL;
	int n,i,D,E;
	char tep[50];
	printf("Ten tep: ");fflush(stdin);gets(tep);
	f=fopen(tep,"rt");
	if(!f) printf("loi mo file");
	printf("du lieu doc duoc:");
	A=Doctep(&n,f);
	for(int i=0;i<n;i++) printf("\n%.3f  %.3f",A[i].x,A[i].y);
	Max(&n,A);
	E=gpt(&n,A);
	printf("\nSo doan thang nam trong goc phan tu thu ba la: %d",E);
}
