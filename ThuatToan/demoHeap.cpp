#include<bits/stdc++.h>
#include"Heap.cpp"
using namespace std;

typedef long long LL;

int main()
{
//	heap<int> H;
//	for(auto x:{345,76,243}) H.push(x);
//	while(H.size()){
//		cout<<H.top()<<" "; H.pop();
//	}
	//Làm bóng Tuyen
	int n;
	priority_queue<LL,vector<LL>,greater<LL>> Q; //Uuw tieen tawng daanf
	LL t[100005],v[100005];
	cin>>n;
	for(int i=1; i<=n;i++) 	cin>>v[i];
	for(int i=1; i<=n;i++)	cin>>t[i];
	LL z=0; //Moc
	for(int i=1; i<=n;i++){
		Q.push(v[i]+z);
		int s=0;
		while(Q.size() && Q.top()-z <= t[i]) {
			s += Q.top()-z;
			Q.pop();	
		}
		z += t[i];
		s += Q.size() * t[i];
		if(Q.empty()) z=0;
		cout<<s<<" ";
	}
	
}

