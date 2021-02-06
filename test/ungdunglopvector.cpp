#include"classVector.cpp"
int main()
{
	Vector u[5];int i;
	for(i=1;i<=4;i++)
	{
		cout<<"nhap u"<<i<<endl;
		cin>>u[i];
	}
	/*u1+u2, u3*u4+ u1*u2, k1u1+k2u2+k3u3+k4u3,*/
	Vector s;
	for(i=1;i<=4;i++) cout<<u[i];
	s=u[1]+u[2];
	cout<<"\nu1+u2="<<s;
	cout<<"\nu3*u4+ u1*u2"<<u[3]*u[4] +u[1]*u[2];
	int k[5];
	Vector tong;
	for(i=1;i<=4;i++)
	{	cout<<"k"<<i<<"=";cin>>k[i];
		Vector t=k[i]*u[i];
		tong=tong+t;
	}
	cout<<"\nk3*u3+k4*u4+ k1*u1+k2*u2"<<tong;
}

