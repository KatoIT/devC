#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
 
using namespace std;

class Dayso{
	private:
		int n;
		int *a;
	public:
		friend istream &operator>>(istream &in, Dayso &d)
		{
			cout<<"n = ";
			in >> d.n;
			cout<<"Day so: ";
			
			for(int i = 0; i< n; i++){
				in >> d.;
			}
			
    		return in;
		};
		friend ostream &operator<<(ostream &out, const Diem &d){
		    out << "(" << d.x << ", " << d.y <<")";
		    return out;
		};
		float kc(){
			return sqrt(pow(x,2) + pow(y,2));
		}
};

int main(){
	int n;
	float sum = 0;
	cout<<"So diem: ";
	cin>>n;
	Diem d[n+1];
	for(int i=0; i<n; i++){
		cin>>d[i];
		sum += d[i].kc();
	}
	cout<<"Tong KC: "<<sum;
	float min = d[0].kc();
	int index = 0;
	for(int i=1; i<n; i++){
		float var = d[i].kc();
		if(min>var){
			min = var;
			index = i;
		}
			
	}
	cout<<"\nMin: "<<d[index];
}
