#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *vt = new int[n*2];
	for(int i = 0; i < n*2; i++){
		cin>>vt[i];
	}
	for(int i = 0; i < n; i++){
		cout<<vt[i]+vt[n+i]<<"\n";
	}
}

