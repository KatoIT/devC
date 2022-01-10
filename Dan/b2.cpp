#include <bits/stdc++.h>
int main()
{
	int n, i;
	float x[100], y[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("\nX[%d] = ", i+1);
		scanf("%f", &x[i]);
		printf("\nY[%d] = ", i+1);
		scanf("%f", &y[i]);
	}
	for(i = 0; i < n; i++){
		printf("\nA[%d] = (%.2f, %.2f)", i+1, x[i], y[i]);
	}
	// y a
	float r, d;
	int dem = 0;
	printf("\nNhap R: ");
	scanf("%.2f", &r);
	for(i = 0; i < n; i++){
		if(y[i] > 10){
			d = sqrt(x[i]*x[i] + y[i]*y[i]);
			if(d > r){
				dem++;
			} 
		}
	}
	printf("Co %d diem nam ngoai duong tron tam O ban kinh %.2f va tung do > 10", dem, r);
	// y b
	int demx1 = 0, demx2 = 0;
	for(i = 0; i < n; i++){
		if(y[i] >= 0){
			demx1++;
		}else{
			demx2++;
		}
	}
	printf("\nCo %d doan thang cat truc hoanh", demx2 * demx2);
}
