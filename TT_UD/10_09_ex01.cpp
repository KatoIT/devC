#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int, vector<int>, greater<int> > Q;
	int n, x;
	cin>>n;
	while(n--)
	{
		cin>>x;
		Q.push(x);
	}
	long long res = 0;
	while(Q.size() >= 2){
		int u = Q.top();
		Q.pop();
		u += Q.top();
		Q.pop();
		res += u;
		Q.push(u);// abcscdajbcjdj
	}
	cout<<res;
	string a = "abcddsbfabsdfhbasdbfahsdfbsd";
	cout << a;
}
