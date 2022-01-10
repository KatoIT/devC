#include<conio.h>
#include<math.h>
#include<iostream>

using namespace std;

class PhanSo{
	private:
		// Danh sach cac thuoc tinh
		int ts;
		int ms;
	public:
		// Ham tao khong tham so
		PhanSo(){
			ts = 0;
			ms = 1;
		}
		// Ham tao co tham so
		PhanSo(int t, int m){
			ts = t;
			ms = m;
		}
		// Toan tu nhap >>
		friend istream &operator>>(istream &in, PhanSo &ps)
		{
			cout<<"\nTu so:";
			in>>ps.ts;
			cout<<"Mau so:";
			in>>ps.ms;
    		return in;
		};
		// Toan tu xuat <<
		friend ostream &operator<<(ostream &out, const PhanSo &ps){
		    out <<ps.ts << "/" << ps.ms <<endl;
		    return out;
		};
		// Toan tu cong
		PhanSo operator +(PhanSo ps)
    	{
	        PhanSo c;
	        c.ts = this->ts * ps.ms + this->ms * ps.ts;
	        c.ms = this->ms * ps.ms;
	        return c;
    	}
    	// Toan tu -
		PhanSo operator *(PhanSo ps)
    	{
	        PhanSo c;
	        c.ts = ts * ps.ts;
	        c.ms = ms * ps.ms;
	        return c;
    	}
};


int main(){
	PhanSo ps1,ps2;
	cin>>ps1;
	cin>>ps2;
	PhanSo tong, tich;
	tong = ps1+ps2;
	tich = ps1*ps2;
	cout<<tong;
	cout<<tich;
}
