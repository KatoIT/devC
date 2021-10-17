#include<iostream>
#include <string.h> 
using namespace std;
class Khachhang{
private:
	char ten[50];
	char maso[50];
	char diachi[100];
	int sothangtruoc;
	int sothangsau;
	public:
		char *getten()
		{
			return ten;
		}
		void nhap();
		void xuat();
		long tinhtiendien();
		int getSodtthu(){
			return sothangsau-sothangtruoc;
		}

};
void Khachhang::nhap(){
cout <<"\n Nhap ten khach hang:";
cin.ignore(1);
cin.get(ten,50);
cout <<"\n Nhap ma so khac hang:";
cin.ignore(1);
cin.get(maso,50);
cout <<"\n Nhap dia chi:";
cin.ignore(1);
cin.get(diachi,100);
cout <<"\n So dien thang truoc:";cin>>sothangtruoc;
cout <<"\n So dien thang sau:";cin>>sothangsau;
}
void Khachhang::xuat(){
	cout <<" Ten khach hang :"<<ten<<endl;
	cout <<" Ma so khach hang:"<<maso<<endl;
	cout <<" Dia chi:"<<diachi<<endl;
		cout <<" so dien tieu thu:"<<getSodtthu()<<endl;
	cout <<" SO tien :"<<tinhtiendien()<<endl;

}
long Khachhang::tinhtiendien(){
	int sd=getSodtthu();
	
	if(sd<=50) return 1000*sd;
	else 
	if(sd>50 && sd<=100) return 1000*50+(sd-50)*1200;
	else if(sd>100 && sd<=200) return 1000*50+50*1200+(sd-100)*1300;
	else
	 return 1000*50+50*1200+100*1300+(sd-200)*5400;	
}
class DSKHSDDIEN{
	int n;
	Khachhang *ds;
	public:
		 void nhap();
		 void xuat();
		 void timtheoten(char ten[50]);
		 float tientieuthuTB();
};
void DSKHSDDIEN::nhap(){
	cout<<"nhap so khach hang :";cin>>n;
	ds=new Khachhang[n+1];
	for(int i=0;i<n;i++)
	{
		cout<<"nhap thong tin cho khach hang thu "<<i+1<<endl;
		ds[i].nhap() ;
	}
}
void DSKHSDDIEN::xuat(){
	for(int i=0;i<n;i++) 
	{
		ds[i].xuat();
		cout<<"==========\n";
	}
}
void DSKHSDDIEN::timtheoten(char ten[50]){
	bool k=false;
	for (int i=0;i<n;i++)
		if (strcmpi(ten,ds[i].getten())==0)
		{
			k=true;
			ds[i].xuat();
		}
	if(k==false) cout<<"k tim thay\n";
}
 float DSKHSDDIEN::tientieuthuTB(){
 	float s=0;
 	for(int i=0;i<n;i++) 
		s+=ds[i].getSodtthu();
	return s/n;
 }
 int main()
 {
 	DSKHSDDIEN x;char ten[50];
 	x.nhap();
 	x.xuat();
 	cout<<"\nHay nhap ten khach hang can tim:";
 	cin.ignore(1);cin.get(ten,50);
 	x.timtheoten(ten);
	cout<<"\nSo dien tieu thu tb la:"<<x.tientieuthuTB();
 }
