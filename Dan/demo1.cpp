#include<iostream>
#include<math.h>
using namespace std ;
class hangngon{
private :
string ten;
int tuoi;
int nkn;
public :
// cin
friend istream&operator>>(istream&dout,hangngon&a)
{
    cout<<" nhap ho ten :" ;
    dout>>ten;
    cout <<" nhap tuoi: ";
    dout>>tuoi;
    cout<<" nhap nam kinh nghiem :";
    dout>>nkn;
    //
    return dout;
}
// cout
friend ostream&operator<<(ostream& out,hangngon& a)
{
    out<< " ho ten :"<< ten<<"tuoi"<<tuoi<<"nam kinh nghiem "<<nkn<<endl;
    return out;
}