#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
 
using namespace std;

class Diem{
	private:
		float x;
		float y;
	public:
		friend istream &operator>>(istream &in, Diem &d)
		{
			cout<<"x = ";
			in >> d.x;
			cout<<"y = ";
			in >> d.y;
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
