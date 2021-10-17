#include<bits/stdc++.h>
using namespace std;
string convert(char val){
	if(val == '0'){
		return "0000";
	}
	if(val == '1'){
		return "0001";
	}
	if(val == '2'){
		return "0010";
	}
	if(val == '3'){
		return "0011";
	}
	if(val == '4'){
		return "0100";
	}
	if(val == '5'){
		return "0101";
	}
	if(val == '6'){
		return "0110";
	}
	if(val == '7'){
		return "0111";
	}
	if(val == '8'){
		return "1000";
	}
	if(val == '9'){
		return "1001";
	}
	if(val == 'A'){
		return "1010";
	}
	if(val == 'B'){
		return "1011";
	}
	if(val == 'C'){
		return "1100";
	}
	if(val == 'D'){
		return "1101";
	}
	if(val == 'E'){
		return "1110";
	}
	if(val == 'F'){
		return "1111";
	}
	return "Error" + val;
}
string convert2(string val){
	if(val == "0000"){
		return "0";
	}
	if(val == "0001"){
		return "1";
	}
	if(val == "0010"){
		return "2";
	}
	if(val == "0011"){
		return "3";
	}
	if(val == "0100"){
		return "4";
	}
	if(val == "0101"){
		return "5";
	}
	if(val == "0110"){
		return "6";
	}
	if(val == "0111"){
		return "7";
	}
	if(val == "1000"){
		return "8";
	}
	if(val == "1001"){
		return "9";
	}
	if(val == "1010"){
		return "A";
	}
	if(val == "1011"){
		return "B";
	}
	if(val == "1100"){
		return "C";
	}
	if(val == "1101"){
		return "D";
	}
	if(val == "1110"){
		return "E";
	}
	if(val == "1111"){
		return "F";
	}
	return "Error" + val;
}
int main(){
	string key;
	int var[56] = {	57,49,41,33,25,17, 9, 1,
					58,50,42,34,26,18,10, 2,
					59,51,43,35,27,19,11, 3,
					60,52,44,36,63,55,47,39,
					31,23,15, 7,62,54,46,38,
					30,22,14, 6,61,53,45,37,
					29,21,13, 5,28,20,12, 4};
	string result = "", str = "", da = "";
	cin>>key;
	for(int i = 0; i<16; i++){
		result += convert(key[i]);
	}
	cout<<"Key: ";
	for(int i = 0; i<16; i++){
		cout<<key[i];
	}
	cout<<"\nNhi Phan: " <<result;
	for(int i = 0; i<56; i++){
		str += result[var[i]-1];
	}
	cout<<"\nPC1: "<<str;
	for(int i = 0; i < 56; i += 4){
		string ex = "";
		ex += str[i];
		ex += str[i+1];
		ex += str[i+2];
		ex += str[i+3];
//		ex += str[i] + str[i+1] + str[i+2] + str[i+3];
		cout<<"\nex = "<<ex;
		da += convert2(ex);
	}
	cout<<"\nD/a: "<<da;
}
// 133457799BBCDFF1

