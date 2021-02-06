#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = -1;
	char M[100], K[100];
//	Nhap M
	cout<<"Dung ky tu '0' de ket thuc chuoi!\nM = ";
	for(int i = 0; i <= 100; i++){
		cin>>M[i];
		n++;
		if(M[i] == '0'){
			break;
		}
	}
//	Nhap Key
	cout<<"K = ";
	for(int i = 0; i <= 100; i++){
		cin>>K[i];
		if(K[i] == '0'){
			break;
		}
	}
//	Output
	cout<<"C = ";
	for(int i = 0; i < n; i++){
//		chuyen 'a' => 'A'
		if(M[i] > 'Z'){
			M[i] -= 32;
		}
		if(K[i] > 'Z'){
			K[i] -= 32;
		}
		
		int var = M[i] - 65;
		cout<< K[var];
	}
}
