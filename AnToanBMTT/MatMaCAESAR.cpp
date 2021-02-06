#include<bits/stdc++.h>
using namespace std;

int main()
{
	int key = 0,n = -1;
	char a[100];
	cout<<"K = ";
	cin>>key;
	cout<<"Dung ky tu '0' de ket thuc chuoi!\nM = ";
	for(int i = 0; i <= 100; i++){
		cin>>a[i];
		n++;
		if(a[i] == '0'){
			break;
		}
	}
	cout<<"C = ";
	for(int i = 0; i < n; i++){
		int var = a[i] + key;
		if(var > 90 ){
			var -= 26;
		}
		cout<< static_cast<char>(var);
	}
}
