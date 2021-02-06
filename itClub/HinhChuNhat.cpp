#include<bits/stdc++.h>
using namespace std;
int main()
{
	float a[12];
	for(int i = 0; i < 12; i++){
		cin>>a[i];
	}
	float c[3];
	c[0] = (a[2] - a[0]) + (a[1] - a[3]);
	c[1] = (a[6] - a[4]) + (a[5] - a[7]);
	c[2] = (a[10] - a[8]) + (a[9] - a[11]);
	
	float max = c[0];
	if(max < c[1]) max = c[1];
	if(max < c[2]) max = c[2];
	printf("%.2f",max*2);
}
