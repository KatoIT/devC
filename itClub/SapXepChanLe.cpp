#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, j = 0;
	cin>>n;
	int *val = new int[n];
	int *var = new int[n];
	for(int i = 0; i<n;i++){
		cin>>val[i];
	}
	for(int i = 0; i<n;i++){
		if(val[i]%2==0) {
			var[++j] = val[i];
		}
		else cout<<val[i]<<" ";
	}
	for(int i = j; i > 0; i--)
	cout<<var[i]<<" ";
}

