#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

class QLH
{
    private:
        string maHang;
        string tenHang;
        int soLuong;
    public:
        // Ham tao khong tham so
        QLH(){
            maHang = "";
            tenHang = "";
            soLuong = 0;
        };
        // Ham tao co tham so
        QLH(string mh, string th, int sl){
            maHang = mh;
            tenHang = th;
            soLuong = sl;
        };
        // Ham nhap
        void Nhap(){
            cout<<"Ma Hang: ";
            // Xoa dau enter
            fflush(stdin);
            getline(cin, maHang);
            cout<<"Ten Hang: ";
            fflush(stdin);
            getline(cin, tenHang);
            cout<<"So Luong: ";
            cin>>soLuong;
        }
        // Ham xuat
        void Xuat(){
            cout<<"Ma Hang: "<<maHang;
            cout<<"\nTen Hang: "<<tenHang;
            cout<<"\nSo Luong: "<<soLuong;
        }
};

class DIENTU : public QLH
{
    private:
        int tgbh;
    public:
        // Ham tao khong tham so
        DIENTU(){
        	QLH();
            tgbh = 0;
        }
        // Ham Nhap 
        void Nhap2(){
            Nhap();
            cout<<"TGBH: ";
            cin>>tgbh;
        }
        // Ham Xuat 
        void Xuat2(){
            Xuat();
            cout<<"\nTGBH: "<<tgbh<<endl;
        }
};

int main(){
    DIENTU dt[100];
    int n;
    // Nhap tu ban phim
    cout<<"So Mat Hang: ";
    cin>>n;
	for(int i = 0; i < n; i++){
		cout<<"Mat Hang thu "<<i+1<<endl;
		dt[i].Nhap2();
	}
	for(int i = 0; i < n; i++){
		dt[i].Xuat2();
	}
	// Nhap trong main (Khong nhap tu ban phim)
	
    return 0;
}
