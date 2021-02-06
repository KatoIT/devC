#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m = 0, n = 0, p = 0;
	cin>>m>>n>>p;
	// Khai bao ma tran
	int mt1[100][100];
	int mt2[100][100];
	int mtkq[100][100];
//	int **mt1 = new int*[m];
//	for(int i=0; i<m;i++){
//		mt1[i] = new int[n];
//	}
//	
//	int **mt2 = new int*[n];
//	for(int i=0; i<n;i++){
//		mt2[i] = new int[p];
//	}
//	
//	int **mtkq = new int*[m];
//	for(int i=0; i<m;i++){
//		mt1[i] = new int[p];
//	}
	// Input ma tran
	for(int i=0; i<m;i++){
		for(int j=0; j<n;j++){
			cin>>mt1[i][j];
		}
	}
	for(int i=0; i<n;i++){
		for(int j=0; j<p;j++){
			cin>>mt2[i][j];
		}
	}
	// Nhan 2 ma tran
	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			int sum = 0;
			for(int k = 0; k < n; k++){
				sum += mt1[i][k]*mt2[k][j];
//				cout<< mt1[i][k]<<"  -  "<<mt2[k][j]<<"\n";
			}
			mtkq[i][j] = sum;
		}
	}
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			cout<<setw(10) << right <<mtkq[i][j];
		}
		cout<<"\n";
	}
	
}

