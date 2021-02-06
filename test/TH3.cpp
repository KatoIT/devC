#include"iostream"
#include"math.h"
#include"stdio.h"
#include"string.h"
using namespace std;
class MH{
	private:
		char ma[15], tenM[50];
		int STC;
	public:
		MH()
		{
			strcpy(ma,""); strcpy(tenM,"");STC=2;
		}
			MH( char s1[10], char s2[20],int tc)
			{
				strcpy(ma,s1);
				strcpy(tenM,s2);
				STC=tc;
			}
			friend istream &operator>>(istream &,MH&);
			friend ostream &operator<<(ostream &,const MH&);
			
			int operator+(const MH &mh2)
			{
				return STC+mh2.STC ;
			}
};
	istream &operator>>(istream &in ,MH&mh)
	{
		cout<<"Nhap ma hoc: "; in.get(mh.ma, 10);
		cout<<"nhap ten mon hoc: "; in.ignore(1); in.get(mh.tenM,20);
		cout<<"nhap so TC: "; in>>mh.STC;
		return in;
	}
	ostream &operator<<(ostream &out ,const MH&mh){
		out<<mh.ma<<" "<<mh.tenM<<" "<<mh.STC<<endl;
	}
	int main()
	{
		MH mh1("01","lap trinh huong doi tuong ",3),mh2;
		cin>>mh2;
		cout<<mh1<<mh2;
		cout<<"tong so tin chi: "<<mh1+mh2;
	}
	
