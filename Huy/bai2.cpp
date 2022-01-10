#include<iostream>
#include<math.h>
#include<string.h>
#include<conio.h>
using namespace std;

class SanPham{
	private:
		string ma;
		string ten;
		long gia;
		long sl;
		long tgbh;
	public:
		void nhap()
		{
			cout << "\nMa Hang: ";
			cin >> ma;
			cout << "Ten hang: ";
			cin >> ten;
			cout << "\nSo luong: ";
			cin >> sl;
			cout << "Gia: ";
			cin >> gia;
			cout << "TGBH: ";
			cin >> tgbh;
		};
		void xuat(){
		    cout <<"\nMa: "<< ma<<"\nTen: "<<ten<<"\nSL: "<<gia<<"Gia: "<<gia<<"TGBH"<<tgbh;
		};
		string getTen(){
			return ten;
		}
};

class XeMay: public SanPham{
	private:
		int mau;
		int dungtichxilanh;
	public:
		void nhap1(){
			nhap();
			cout << "Mau: ";
			cin >> mau;
			cout << "DTXL: ";
			cin >> dungtichxilanh;
		}
		
		void xuat1(){
			xuat();
			cout<<"\nMau: "<<mau<<"\ndung tich xi lanh: "<<dungtichxilanh;
		}
		
		int getMau(){
			return mau;
		}
		
		
};

main(){
	XeMay xm[100];
	int n;
	cout<<"So SP:";
	cin>>n;
	for(int i = 0; i<n; i++){
		xm[i].nhap1();
	}
	for(int i = 0; i<n; i++){
		xm[i].xuat1();
	}
//	ko co thuoc tinh hang sp
	int mauSP;
	string tenSP;
	cout<<"Mau SP:";
	cin>>mauSP;
	cout<<"Ten SP:";
	cin>>tenSP;
	for(int i = 0; i<n; i++){
		if(mauSP == xm[i].getMau()){
			if(tenSP == xm[i].getTen()){
				xm[i].xuat1();
			}
		}
	}
}
