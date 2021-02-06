#include<bits/stdc++.h>
using namespace std;


int main(){
	int a,n;
	cout<<"---| x = a^(-1) mod n |---";
	cout<<"\na = ";
	cin>>a;
	cout<<"n = ";
	cin>>n;
	
	int du[100], thuong[100], xi[100], yi[100];
	int val = 1, k = 2;
	if(n > a) {
		val = 0;
		xi[0] = 0;	
		yi[0] = 1;	
		xi[1] = 1;	
		yi[1] = 0;
	}
	else {
		xi[0] = 1;	
		yi[0] = 0;	
		xi[1] = 0;	
		yi[1] = 1;
		int var = a;
		a = n;
		n = var; 
	}
	
	du[0] = n;
	du[1] = a;
	thuong[0] = 0;
	thuong[1] = 0;
	while(a != 0){
		du[k] = n%a;
		thuong[k] =(int) n/a;
		n = a;
		a = du[k];
//		cout<<du[k]<<" | "<<thuong[k]<<"\n";
		k++;
	}
//	cout<<k<<"\n";
	for(int i = 2; i < k;i++){
		xi[i] = xi[i-2] - (xi[i-1]*thuong[i]);
		yi[i] = yi[i-2] - (yi[i-1]*thuong[i]);
	}
	cout<<"\n";
	for(int i = 0; i < k ;i++){
		cout<<"|"<<du[i]<<"\t||\t"<<thuong[i]<<"\t||\t"<<xi[i]<<"\t||\t"<<yi[i]<<"\t|\n";
		cout<<"\n_________________________________________________________\n";
	}
}
