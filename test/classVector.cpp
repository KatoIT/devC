#include<iostream>
using namespace std;
class Vector{
	int sochieu;
	float *tp;
	public:
		Vector();
		Vector(int n);
		friend istream &operator>>(istream&, Vector&);
		friend ostream &operator<<(ostream&, const Vector&);
		Vector operator+(const Vector&);
		float operator*(const Vector&);
		friend Vector operator*(const int &,const Vector&);
};
Vector::Vector()
{
	sochieu=1;
	tp=new float[2];
}
Vector::Vector(int n)
{
	sochieu=n;
	tp=new float[n+1];
}
istream &operator>>(istream& is, Vector&u)
{
	cout<<"nhap so chieu:";is>>u.sochieu;
	u.tp=new float[u.sochieu+1];
	for(int i=1;i<=u.sochieu;i++)
	{
		cout<<"nhap thanh phan thu "<<i<<":";
		is>>u.tp[i];
	}
	return is;
}
ostream &operator<<(ostream& out, const Vector&u)
{
	out<<"so chieu:"<<u.sochieu<<"   ";
	for(int i=1;i<=u.sochieu;i++) out<<u.tp[i]<<" ";
	return out;
}
Vector Vector::operator+(const Vector&v){
	Vector t,u=*this;
	t.sochieu =(u.sochieu >v.sochieu)?u.sochieu:v.sochieu;
	int k=(u.sochieu <v.sochieu)?u.sochieu:v.sochieu;
	t.tp =new float[t.sochieu +1];
	for(int i=1;i<=k;i++) t.tp[i]=u.tp [i]+v.tp[i];
	for(int i=k+1;i<=t.sochieu ;i++)
		if(k==u.sochieu ) t.tp[i]=v.tp[i]; else  t.tp[i]=u.tp[i];
	return t;
}
float Vector::operator*(const Vector&v)
{	float s=0;
	int k=(sochieu <v.sochieu)?sochieu:v.sochieu;
	for(int i=1;i<=k;i++) s+=tp [i]*v.tp[i];
	return s;	
}
Vector operator*(const int &k,const Vector&u)
{
	Vector v;
	v.sochieu=u.sochieu;
	v.tp=new float [v.sochieu+1];
	for(int i=1;i<=v.sochieu;i++) v.tp[i]=k*u.tp[i];
	return v;
}
