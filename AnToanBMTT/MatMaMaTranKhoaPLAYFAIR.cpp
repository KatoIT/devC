#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

char Key[5][5];
int key = 0,n = -1, nK = - 1;
char M[100],K[100];

bool checkKey(char val){
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
			if(val == Key[i][j]) return false;
	}	
	return true;
}

void updateKey(){
	for(int i = 0; i < 5; i++)
	{
		cout<<"a";
		for(int j = 0; j < 5; j++) {
			for(int z = 0; z < nK; z++){
				if(checkKey(K[z]))  Key[i][j] = K[z];
				cout<<"b"<<Key[i][j];
				break;
			}
			for(int z = 65; z <= 90; z++)
			{
				if(checkKey(static_cast<char>(z)))  {
					Key[i][j] = K[z];
					break;
				}
			}
	
		}
			
	}	
	
	
}

int main()
{
	
	
//	Nhap M
//	cout<<"Dung ky tu '0' de ket thuc chuoi!\nM = ";
//	for(int i = 0; i <= 100; i++){
//		cin>>M[i];
//		n++;
//		if(M[i] == '0'){
//			break;
//		}
//	}
//	Nhap Key
	cout<<"K = ";
	for(int i = 0; i <= 100; i++){
		cin>>K[i];
		nK++;
		if(K[i] == '0'){
			break;
		}
	}
	updateKey();
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
			cout<<Key[i][j];
	}
	
}
