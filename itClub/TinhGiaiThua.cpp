#include<bits/stdc++.h>
using namespace std;
long long gt(int a){
	if(a == 1){
		return 1;
	}
	return a * gt(a-1);
}
int main()
{
	int n;
	cin >> n;
	cout << gt(n);
}


