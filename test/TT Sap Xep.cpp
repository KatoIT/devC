
//Interchange Sort

void InterchangeSort(int a[], int n)
{
	int i, j, tam;
	for(i=0; i<n-1; i++)
	for(j=i+1; j<n; j++)
	if(a[j]<a[i])
	{
		tam=a[i];
		a[i]=a[j];
		a[j]=tam;
	}
}

//Selection Sort

void SelectionSort(int a[], int n)
{
	int vtmin, i, j, tam;
	for(i=0; i<n-1; i++)
	{
		vtmin=i;
		for(j=i+1; j<n; j++)
		if(a[j]<a[vtmin])
		vtmin=j;
		tam=a[i];
		a[i]=a[vtmin];
		a[vtmin]=tam;
	}
}

//Insert Sort

void InsertSort(int a[], int n)
{
	int pos, x;
	for(int i=1; i<n; i++)
	{
		x=a[i];
		pos=i-1; //Tim vi tri chen x
		while((pos>=0) && (a[pos]>=x))
		{
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x; //Chen x vao day
	}
}



//Bubble Sort

void BubbleSort(int a[], int n)
{
	for(int i=0; i<n-1; i++)
	for(int j=n-1; j>i; j--)
	if(a[j]<a[j-1])
	{
		int tam=a[j];
		a[j]=a[j-1];
		a[j-1]=tam;
	}
}

//Quick Sort

void QuickSort(int a[], int First, int Last)
{
	int i, j, tam, mid;
	mid=a[(First+Last)/2]; 
	i=First;
	j=Last;
	do
	{
		while(a[i]<mid)
		i++;
		while(a[j]>mid)
		j--;
		if(i<=j)
		{
			tam=a[i];
			a[i]=a[j];
			a[j]=tam;
			i++;
			j--;
		}
	}
	while(i<j);
	if(First<j)
	QuickSort(a, First, j);
	if(i<Last)
	QuickSort(a, i, Last);
}


