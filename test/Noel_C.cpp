#include <bits/stdc++.h>
using namespace std;
void noelTree(int h)
{
	// draw body tree
	for(int i=1;i<=h;i++)
	{
		//draw space
		for(int j=1;j<=h-i;j++)
		{
			printf(" ");
		}
		//draw *
		for(int k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	// draw root tree
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<h-2;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=3;k++)
		{
			printf("**");
		}
		printf("\n");
	}
}

int main()
{
	for(int i=4; i<=40; i+=2){
		noelTree(i);
	}
	
	return 1;

}

