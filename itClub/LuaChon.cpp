#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	bool ok = true;
	if(b <= c) ok = false;
	if(d <= a) ok = false;
	if(d + c <= a + b) ok = false;
	if(d <= 0 || c <= 0) ok = false;
	if(a%2 != 0) ok = false;
	if(ok) cout<<"Chap nhan";
	else cout<<"Khong chap nhan";
}

