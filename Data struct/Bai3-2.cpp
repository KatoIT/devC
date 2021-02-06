#include<bits/stdc++.h>
using namespace std;
// Xay dung lop diem
class Diem{
private:
	double x,y;
public:
	void taodiem(double a, double b){
		x=a;	y=b;
		}
	friend istream &operator>>(istream &is,Diem &d){
		is>>d.x>>d.y;
		return is;
	}
	friend class doanthang;
};
// Xay dung lop daon thang
class doanthang{
	private:
		Diem d1,d2;
	public:
		doanthang(){
			d1.x=0;		d1.y=0;
			d1.x=0;		d2.y=0;
		}
		doanthang(Diem d1,Diem d2);
		void nhapdt();
		void taodt(Diem d1, Diem d2);
		void xuatdt();
		void dodaidt();
};
// ?
doanthang::doanthang(Diem d1, Diem d2){
	this->d1.x=d1.x;
	this->d1.y=d1.y;
	this->d2.x=d2.x;
	this->d2.y=d2.y;
}
// ?
void doanthang::taodt(Diem d1, Diem d2){ 
	this->d1.x=d1.x;
	this->d1.y=d1.y;
	this->d2.x=d2.x;
	this->d2.y=d2.y;
}
//Nhap toa do 2 dau doan thang
void doanthang::nhapdt(){
	cout<<"\nNhap toa do dau mut thu nhat: "<<endl;	cin>>d1;
	cout<<"\nNhap toa do dau mut thu hai: "<<endl;	cin>>d2;
} 
//Xuat toa do 2 dau doan thang
void doanthang::xuatdt(){
	cout<<"\nToa do diem dau mut thu nhat: "<<"("<<d1.x<<", "<<d1.y<<")";
	cout<<"\nToa do diem dau mut thu hai: "<<"("<<d2.x<<", "<<d2.y<<")";
}
// Ham tinh do dai doan thang
void doanthang::dodaidt(){
	cout<<"\nDo dai doan thang vua nhap la: "<<sqrt(pow(d2.x+d1.x,2)+pow(d2.y+d1.y,2));
}
//
int main()
{
	Diem d1,d2;
	doanthang d(d1,d2);
	d.nhapdt();
	d.xuatdt();
	d.dodaidt();
}





