#include<stdio.h>
#include<math.h>
main(){
	int n, i;
	float x[100], y[100];
	printf("moi ban nhap n la so diem: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		printf("moi nhap diem thu %d: ", i);
		scanf("%f%f", &x[i], &y[i]);
	}
	for(i=1;i<=n;i++)
		printf("(%.2f, %.2f)\t", x[i], y[i]);
		// xac dinh diem tm de bai
	int v = -1;
	float min = -1;
	for(i=1;i<=n;i++){
		if(x[i] > 0 && y[i]<0){
			float d = sqrt(x[i] * x[i] + y[i] * y[i]);
			if(d < min || min == -1 )
			{
				min = d;
				v = i;
			}
		}
	}
	if(v == -1){
		printf("\n Khong co diem thuoc goc phan tu thu 4");
	}else{
		printf("\ndiem gan goc toa do nhat la: (%.2f, %.2f)", x[v], y[v]);
	}
	
}

