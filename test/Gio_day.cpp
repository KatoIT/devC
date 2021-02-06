#include<bits/stdc++.h>
using namespace std;
int main()
{
	int start1,start2,end1,end2,max;
	double var1,var2;
	cout<<"Time to start sleeping:\nHours: ";
		cin>>start1;
	cout<<"Minute: ";
		cin>>start2;
	cout<<"Latest time(h): ";
		cin>>max;
		max*= 60;
	var1 = start1*60+start2;
	for(int i=3; i<=6; i++){
		var2 = i*90+var1+10;
		if(var2>=1440) var2-=1440;
		end1 = (int)var2/60;
		end2 = (int)var2%60;
		if(var2 < max && max - var2 < 90) {
			cout<<"====> Suggestions: "<<end1<<"h "<<end2<<"'\n";
			continue;	
		}
		cout<<"Wake up time: "<<end1<<"h "<<end2<<"'\n";
	}
}
