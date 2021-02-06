#include<bits/stdc++.h>
using namespace std;

int main()
{
	int key = 0,n = -1, nK = - 1;
	char M[100],K[100];
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
		nK++;
		if(K[i] == '0'){
			break;
		}
	}
//	Output
	cout<<"C = ";
	int j = 0;
	for(int i = 0; i < n; i++){
//		chuyen 'a' => 'A'
		if(M[i] > 'Z'){
			M[i] -= 32;
		}
		if(K[i] > 'Z'){
			K[i] -= 32;
		}
		
		int var = 0;
		if(j < nK){
			var = M[i] + K[j] - 65;
			j++;
		}else{
			var = M[i] + M[i-nK] - 65;
		}
		if(var > 90){
			var -= 26;
		}
		
		cout<< static_cast<char>(var);
	}
}
