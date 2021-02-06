#include<bits/stdc++.h>
using namespace std;

int main()
{
	int key = 0,n = -1;
	char M[100];
	cout<<"K = ";
	cin>>key;
	cout<<"Dung ky tu '0' de ket thuc chuoi!\nM = ";
	for(int i = 0; i < 100; i++){
		cin>>M[i];
		n++;
		if(M[i] == '0'){
			for(int j = i+1; j < 100; j++)
			{
				M[j] = '0';
			}
			break;
		}
	}
	int val = (int) n/key + 1;
	cout<<val;
	
	cout<<"C = ";
	for(int i = 0; i < key; i++)
		for(int j = i; j < n; j += key){
			cout<< M[j];
		}
}
//N O P A I N N O G
//A I N N O P A I N
//NA OI PN AN IO NP NA OI GN
