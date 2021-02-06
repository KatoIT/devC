#include<bits/stdc++.h>
using namespace std;
int UCLN(int a, int b){
	if(a==b){
		return a;
	}
	if(a>b){
		return UCLN(a-b, b);
	}
	return UCLN(a, b-a);
}
int BCNN(int a, int b){
	return a*b/UCLN(a,b);
}
int main()
{
//	queue<int> Q,P;
//	int x,y;
//		cin>>x>>y;
//		Q.push(x);
//		P.push(y);
//	while(Q.back() != 0 || P.back() != 0){
//		cin>>x>>y;
//		Q.push(x);
//		P.push(y);
//	}
//	while(Q.size() != 0){
//		cout<<UCLN(Q.front(),P.front())<<" "<<BCNN(Q.front(),P.front())<<"\n";
//		Q.pop();
//		P.pop();
//	}

	int x[10005], y[10005];
	for(int i = 0; i < 10005; i++){
		cin>>x[i]>>y[i];
		if(x[i] == 0 && y[i] == 0) break;
	}
	for(int i = 0; i < 10005; i++){
		if(x[i] == 0 && y[i] == 0) break;
		cout<<UCLN(x[i], y[i])<<" "<<BCNN(x[i], y[i])<<"\n";
	}
}

