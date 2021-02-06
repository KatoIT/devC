#include<bits/stdc++.h>
using namespace std;
class nv{
	private:
		bool isEr;
		int ma;
		int h;
		int vnd;
		int luong;
	public:
			void Nhap(){
				cin>>ma>>h>>vnd;
				luong = h*vnd;
				if(h > 480|| h < 0 ||vnd < 0){
					isEr = true;
				}else{
					isEr = false;
				}
			};
			void Xuat(){
				cout<<ma<<" "<<luong<<"\n";	
			};
			int getLuong(){
				return luong;
			};
			int getH(){
				return h;
			};
			bool getIsEr(){
				return isEr;
			}
};
int main()
{
	int n = 0;
	long long Tl = 0, Th = 0;
	cin>>n;
	nv *E = new nv[n];
	for(int i = 0; i<n; i++)
	{
		E[i].Nhap();
	}
		for(int i = 0; i<n; i++){
			if(E[i].getIsEr()){
				cout<<"So lieu sai";
				return 0;
			}
		}
		
		for(int i = 0; i<n; i++)
		{
			E[i].Xuat();
			Tl += E[i].getLuong();
			Th += E[i].getH();
		}
		if(Th == 0){
			cout<<Th<<" "<<Tl<<" "<<Tl;// Error
		}else{
			cout<<Tl/Th<<" "<<Tl/n<<" "<<Tl;
		}
		
	
}

