#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
string x0 = "0";
string x1 = "1";
//cin >> n;
for(int i = 2 ; i <= 100 ; i++){
	string x3 = x1;
	x1 = x1+x0;
	x0 = x3;
}

cout<<x1;
}

