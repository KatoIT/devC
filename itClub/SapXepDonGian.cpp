#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
	double a1, a2, b1, b2, c1, c2, D, Dx, Dy, x, y;
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	D = a1 * b2 - a2 * b1;
    Dx = c1 * b2 - c2 * b1;
    Dy = a1 * c2 - a2 * c1;
    if (D == 0) {
        if (Dx + Dy == 0)
            cout << "HE PHUONG TRINH VO SO NGHIEM";
        else
            cout << "HE PHUONG TRINH VO NGHIEM";
    }
    else {
        x = Dx / D;
        y = Dy / D;
        cout << "x = " <<setprecision(3)<<fixed<<x<<endl;
        cout << "y = " <<setprecision(3)<<fixed<<y;
    }
}
