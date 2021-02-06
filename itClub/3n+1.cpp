#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<int> a;
	int n = 0;
	cin>>n;
	a.push(n);
	while(n != 1){
		if(n % 2 == 0){
			n = n / 2;
		}else{
			n = n * 3 + 1;
		}
		a.push(n);
	}
	cout<<a.size()<<" ";
	
	while(a.size() != 0){
		cout<<a.front()<<" ";
		a.pop();
	}
	
}

