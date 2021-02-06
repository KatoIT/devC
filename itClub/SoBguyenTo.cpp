#include<bits/stdc++.h>
using namespace std;

bool isSoNguyenTo(long long n){
	if(n<=1){
		return 0;
	} 
	if(n<=3){
		return 1;
	} 
	if (n % 2 == 0 || n % 3 == 0){
		return 0;
	} 
	for (int i = 5; i * i <= n; i = i + 6) {
		if (n % i == 0 || n % (i + 2) == 0) {
			return 0;
		}
	}
	return 1;
}
int main()
{
	long long n;
	cout<<"Input 0 == Stop\nn = ";
	cin>>n;
	while(n!=0){
		if(isSoNguyenTo(n)) cout<<"\n\t "<< n <<" la So Nguyen To\nn = ";
		else cout<<"\n\t"<<n<<" KHONG la So Nguyen To\nn = ";
		cin>>n;
	}
		
} 
