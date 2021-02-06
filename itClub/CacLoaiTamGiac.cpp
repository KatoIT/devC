#include<bits/stdc++.h>
using namespace std;
void hoanvi(double *a, double *b) 
{
    double temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	if(b>a && b>c) {
		hoanvi(&a,&b);
	}
	if(c>a && c>b){
		hoanvi(&a,&c);
	}
	if(b<c){
		hoanvi(&b,&c);
	}
//	cout<<a<<b<<c;
	if(a>=b+c) {
		cout<<"KHONG PHAI TAM GIAC";
	}else{
		if(a*a == b*b + c*c){
			cout<<"TAM GIAC VUONG";
		}else{
			if(a*a > b*b + c*c){
				cout<<"TAM GIAC TU";
			}else{
				cout<<"TAM GIAC NHON";
			}
		}
		if(a==b && b==c){
			cout<<"\nTAM GIAC DEU";
		}else{
			if(a == b || b==c || c==a){
				cout<<"\nTAM GIAC CAN";
			}
		}
	}
}

