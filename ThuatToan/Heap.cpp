#include<bits/stdc++.h>
using namespace std;

#ifndef __heap__cpp
#define __heap__cpp

template<class T>
class heap
{
	T *buff;
	int cap,num; // cap : suc chua; num: so thuc chua
	public:
		heap() {
			buff = NULL;
			cap = num = 0;
		}
		~heap(){//-----------------------------------------------------------------------------------------------
			if(buff) delete[]buff;
			buff = NULL;
		}
		int size(){
			return num;;
		}
		T top() {
			return buff[0];
		}
		bool empty(){
			return num==0;
		}
		void heapy_up(int k){
			if(k>0 && buff[k]>buff[(k-1)/2]){
				swap(buff[k]>buff[(k-1)/2]);
				heapy_up((k-1)/2);
			}
		}
		void heapy_down(int k){
			if(k*2+1 >= num) return;
			int p = 2*k+1 ;
			if(p+1 < num && buff[p]<buff[p+1]){
				p++;
			}
			if(buff[k]<buff[p]){
				swap(buff[k],buff[p]);
				heapy_down(p);
			}
		}
		void pop(){
			buff[0] = buff[--num];
			heapy_down(0);
		}
		void push(T x){
			if(cap==num){ //full -> extend
				cap = cap*1.7+5;
				T *tem = new T[cap];
				for(int i = 0; i < num; i++){
					tem[i] = buff[i];
				}
				if(buff) delete[]buff;
				buff=tem;
			}
			buff[num++] = x;
			heapy_down(num-1);
		}
};
#endif
