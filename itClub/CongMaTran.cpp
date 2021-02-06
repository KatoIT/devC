#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m = 0, n = 0;
	cin>>m>>n;
	int *mt1 = new int[m*n];
	int *mt2 = new int[m*n];
	for(int i = 0; i < m; i++)
	for(int j = 0; j < n; j++)
	{
		cin>>mt1[i*n+j];
	}
	for(int i = 0; i < m; i++)
	for(int j = 0; j < n; j++)
	{
		cin>>mt2[i*n+j];
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++)
		{
			cout<<mt1[i*n+j]+mt2[i*n+j]<<" ";
		}
		cout<<"\n";
	}
	
}

