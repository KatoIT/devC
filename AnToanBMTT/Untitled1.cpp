#include<bits/stdc++.h>
using namespace std;

char matranK[5][5];
int k = 0;

bool isHas(char val, int k){
	for(int i = 0; i<k, i++){
		if(val == matranK[i]) return true;
	}
	return false;
}

int main(){
	char var;
	
	cout<<"Khóa: ";
	
	cin>>var;
	while(var != '0')
	{
		if(var == 'j') var = i;
		if(!isHas(var, k)){
			matranK[k] = var;
			k++;
		}
		cin>>var;
	}
	
	for(int i = 0; i<25; i++){
		
	}
}

