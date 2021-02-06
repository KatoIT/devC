#include"iostream"
#include"math.h"
using namespace std;
class Toado{
	private:
		float x,y;
	public:
		Toado(){
			x=0;y=0;
		}
		Toado(float a,float b){
			x=a;y=b;
		}
		friend istream &operator>>(istream &in,Toado &a){
			cout<<"\nNhap hoanh do va tung do: ";
			in>>a.x>>a.y;
			return in;
		}
		friend ostream &operator<<(ostream &out,Toado &a){
			out<<"("<<a.x<<" , "<<a.y<<")"<<endl;
			return out;
		}
};
class Hinhtron
{
	private:
		float bk;
		Toado toadotam;
	public:
		Hinhtron():toadotam(){
			bk=1;
		}
		Hinhtron(float a,float hd,float td):toadotam(hd,td){
			bk=a;
		}
		friend istream &operator>>(istream &in,Hinhtron &a){
			cout<<"\nNhap vao ban kinh: ";in>>a.bk;
			cout<<"\nNhap toa do tam: ";in>>a.toadotam;
			return in;
		}
		friend ostream &operator<<(ostream &out,Hinhtron &a){
			out<<"\nBan kinh: "<<a.bk;
			out<<"\nToa do tam: "<<a.toadotam;
			//return out;
		}
		float getbk(){
			return bk;
		}
};
class Dayhinhtron
{
	private:
		int sodiem;
		Hinhtron *htron;
	public:
		Dayhinhtron(){
			sodiem=0;
			htron=NULL;	
		}
		Dayhinhtron(int n){
			sodiem=n;
			htron=new Hinhtron[sodiem+1];	
		}
		friend istream &operator>>(istream &in,Dayhinhtron &a)
		{
			cout<<"Nhap so diem: ";in>>a.sodiem;
			a.htron=new Hinhtron[a.sodiem+1];
			for(int i=1;i<=a.sodiem;i++){
				cout<<"nhap hinh tron thu "<<i<<endl;
				in>>a.htron[i];
			}
			return in;
		}
		friend ostream &operator<<(ostream &out,Dayhinhtron &a){
			out<<"So hinh tron"<<a.sodiem;
			for(int i=1;i<=a.sodiem;i++)
			out<<a.htron[i];
			return out;
		}
		friend void operator!(Dayhinhtron &a){
			for(int i=1;i<a.sodiem;i++)
			for(int j=i+1;j<=a.sodiem;j++)
			if(a.htron[i].getbk()<a.htron[j].getbk())
			{
				Hinhtron t=a.htron[i];
				a.htron[i]=a.htron[j];
				a.htron[j]=t;
			}
		}
		
};
int main()
{
	Dayhinhtron a;
	cin>>a;
	cout<<a;
	cout<<"\nDay sau khi sap xep la:\n"; 
	!a;//sapxep(a);
	cout<<a;//sapxeptheohamban
	/*sapxeptheophuongthuc
	a.sapxep();*/
	
}
		
			
			
			
