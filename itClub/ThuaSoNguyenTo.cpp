#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    map<int, int> m;
    for(int i = 2; i <= N; i++){
        while(N % i == 0){
            m[i]++;
            N /= i;
        }
    }
    for( auto i:m){
        cout << i.first<<" "<< i.second<<"\n";	
    }
}

