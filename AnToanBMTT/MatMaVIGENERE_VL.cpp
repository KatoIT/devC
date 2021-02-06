#include<bits/stdc++.h>
using namespace std;

int main()
{
	int key = 0,n = -1, nK = - 1;
	char M[100],K[100];
	cout<<"Dung ky tu '0' de ket thuc chuoi!\nM = ";
	for(int i = 0; i <= 100; i++){
		cin>>M[i];
		n++;
		if(M[i] == '0'){
			break;
		}
	}
	cout<<"K = ";
	for(int i = 0; i <= 100; i++){
		cin>>K[i];
		nK++;
		if(K[i] == '0'){
			break;
		}
	}
	
	cout<<"C = ";
	int j = 0;
	for(int i = 0; i < n; i++){
//		check key 
		if(M[i] > 'Z'){
			M[i] -= 32;
		}
		if(K[i] > 'Z'){
			K[i] -= 32;
		}
		int var = M[i] + K[j] - 65;
		j++;
		if(j == nK){
			j -= nK;
		}
		if(var > 90){
			var -= 26;
		}
		cout<< static_cast<char>(var);
	}
}
