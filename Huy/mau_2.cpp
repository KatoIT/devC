#include<iostream>
#include<math.h>
using namespace std;

class Toado{
	private:
		float x,y;
	public:
		Toado(){
			
		}
		
		void nhap(){
			cout<<"\nNhap vao hoanh do va tung do: ";
			cin>>x>>y;
		}
		
		void xuat(){
			cout<<"\n("<<x<<","<<y<<")";
		}
		float KhoangCach(){
			float kc;
			kc = sqrt(pow(x,2) + pow(y,2));
			return kc;
		}
};

class Diemmau: public Toado {
	private:
		int mau;
	public:
		void nhap1(){
			Toado::nhap();
			cout<<"Nhap vao mau: ";
			cin>>mau;
		}
		
		void xuat1(){
			Toado::xuat();
			cout<<"\nMau: "<<mau;
		}
		
		int getMau(){
			return mau;
		}
};

main(){
	Diemmau *diem;
	int i,n;
	cout<<"Nhap vao so diem: ";
	cin>>n;
	diem = new Diemmau[n+1];
	
	for(i=1;i<=n;i++){
		cout<<"Nhap vao toa do diem thu "<<i<<": ";
		diem[i].nhap1();
	}
	
	cout<<"\n"<<"Cac diem vua nhap la: ";
	for(i=1;i<=n;i++){
		diem[i].xuat1();
	}
	
	int dem1 = 0;
	for(i=1;i<=n;i++){
		if(diem[i].getMau() == 1){
			dem1++;
		}
	}
	cout<<"\nSo diem mau do la: "<<dem1;
	
	int dem2 = 0;
	for(i=1;i<=n;i++){
		if(diem[i].getMau() == 2){
			dem2++;
		}
	}
	cout<<"\nSo diem mau vang la: "<<dem2;
	
	int dem3 = 0;
	for(i=1;i<=n;i++){
		if(diem[i].getMau() == 3){
			dem3++;
		}
	}
	cout<<"\nSo diem mau xanh la: "<<dem3;
	
	float max = diem[1].KhoangCach();
	for(i=1;i<=n;i++){
		if(max<diem[i].KhoangCach()){
			max = diem[i].KhoangCach(); 
		}
	}
	
	cout<<"\nCac diem co khoang cach lon nhat: ";
	for(i=1;i<=n;i++){
		if(diem[i].KhoangCach() == max){
			diem[i].xuat();
		}
	}
}
