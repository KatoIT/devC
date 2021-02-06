#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,d,e;
	cin>>a>>b>>c>>d;
	string ok = "";
	double val = round((a * 2 + b * 3 + c * 4 + d))/10;
	cout<<"Media: "<<val;
	if(val >= 7 )  cout<<"\nAluno aprovado.";
	else 	if(val < 5 ) cout<<"\nAluno reprovado.";
			else {
				cout<<"\nAluno em exame.";
				cin>>e;
				cout<<"\nNota do exame: "<<e;
				double val2 = round((val + e)*5)/10;
				if(val2 >= 5) cout<<"\nAluno aprovado.";
				else cout<<"\nAluno reprovado.";
				cout<<"\nMedia final: "<<val2;
			}
}

