#include<bits/stdc++.h>
using namespace std;

int main(){
	long long m, k = 1, a, n;
	cout<<"----| b = a^m mod n |----\na = ";
	cin>>a;
	cout<<"m = ";
	cin>>m;
	cout<<"n = ";
	cin>>n;
	long long val = 0;
	bool isDu[30];
	while(m > 3){
		if(m%2 == 0){
			m /= 2;
			cout<<"a^"<<m*2<<" = "<<"(a^ "<<m<<" )^2\n";
			isDu[k] = false;
		}else{
			m = (m - 1) / 2;
			cout<<"a^"<<m*2+1<<" = "<<"(a^ "<<m<<" )^2 * a\n";
			isDu[k] = true;
		}
		k++;
	}
	
	val = ((long long)pow(a,m)) % n;
	cout<<"\na^"<<m<<" mod "<<n<<" = "<<val;
	
//	for(int i = 1; i<=k; i++){
//		cout<<"\n"<<isDu[i]<<" i = "<<i;
//	}
	
	for(int i = k-1; i > 0; i--){
//		cout<<"\n--"<<val*val*a<<" "<<isDu[i];
		
		if(isDu[i]){
			val = (val*val*a) % n;
		}
		else
		{	
			val = (val*val) % n;
		}
		cout<<"\nSo du: "<<val;
	}
	cout<<"\n________________________________________";
	cout<<"\n\nDap so: "<<val;
	cout<<"\n\n";
}
