#include<iostream>
#include<math.h>
using namespace std;
class thisinh{
	private:
		string sbd;
		string ten;
		string gt;
		int year;
		double t,l,h;
	public:
		friend istream& operator>>(istream &is, thisinh A){
			is.ignore(1);
			cout<<"\nSBD: ";
			getline(is,A.sbd);
			cout<<"\nHo va ten: ";
			getline(is,A.ten);
			cout<<"\nGioi tinh: ";
			getline(is,A.gt);
			cout<<"\nNam sinh: "; cin>>A.year;
			cout<<"\nNhap diem Toan: "; cin>>A.t;
			cout<<"\nNhap diem Ly: "; cin>>A.l;
			cout<<"\nNhap diem Hoa: "; cin>>A.h;
			return is;
		} 	
		friend ostream& operator<<(ostream os,thisinh A){
			os<<"\n Number BD: "<<A.sbd;
			os<<"\n Name: "<<A.ten;
			os<<"\n Gioi tinh: "<<A.gt;
			os<<"\n Nam sinh: "<<A.year;
			os<<"\n Diem Toan-Ly-Hoa: "<<A.t<<" , "<<A.l<<" , "<<A.h;
			return os;
		}
		void taots(string sbd, string ten, string gt, int year, double t, double l, double h);
		friend class DS;
};
void thisinh::taots(string sbd, string ten, string gt, int year, double t, double l, double h)
{
	sbd			=	sbd;
	ten			=	ten;
	gt			=	gt;
	year		=	year;
	t			=	t;
	l			=	l;
	h			=	h;
}
class DS{
	private:
		thisinh *A;
		thisinh K;
		int n;
	public:
		DS(thisinh A);
		void Nhap();
		void Xuat();
		void Tong();
		void Diemtungmon();
};
DS::DS(thisinh A){
	this->K.sbd			=	A.sbd;
	this->K.ten			=	A.ten;
	this->K.gt			=	A.gt;
	this->K.year		=	A.year;
	this->K.t			=	A.t;
	this->K.l			=	A.l;
	this->K.h			=	A.h;
}
void DS::Nhap()
{
	cout<<"\nNhap so luong thi sinh: ";cin>>n;
	A =new thisinh[n+2];
	for(int i=1;i<=n;i++){
		cout<<"\nNhap thong tin thi sinh thu "<<i<<": ";
		cin>>A[i];
	}
}
void DS::Xuat()
{
	cout<<"\nDanh sach thi sinh: ";
	for(int i=1;i<=n;i++){
		cout<<"\nThong tin thi sinh thu "<<i<<": "<<endl;
		cout<<A[i];
	}
}
void DS::Tong(){
	for(int i=1;i<=n;i++){
		cout<<"\nTong diem cua thi sinh thu "<<i<<" la: ";
		cout<<A[i].t+A[i].l+A[i].h<<endl;
	}
}
void DS::Diemtungmon(){
	for(int i=1;i<=n;i++){
		cout<<"\nDiem cua thi sinh thu "<<i<<" la: ";
		cout<<"\nToan: "<<A[i].t<<"\nLy: "<<A[i].l<<"\nHoa: "<<A[i].h<<endl;
	}
}

int main()
{
	thisinh a;
	K.toats("01","Nguyen Van An","Nam",2000,8,8,8);
	DS P(K);
	P.Xuat();
	P.Nhap();
	P.Xuat();
	P.Tong();
	P.Diemtungmon();
}
