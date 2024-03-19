//lab-18 merge sort

// merge sort
#include<stdio.h>

void mergesort(int a[],int l,int h)
{
	if (l < h) {
        int m = (l+h)/2;
        mergesort(a, l, m);
        mergesort(a, m + 1, h);
        merge(a, l, m, h);
    }
}
void merge(int l,int m,int h)
{
	int h,i,j,k;
	int b[50];
	h=l;
	i=l;
	j=m+1;
	while(h<=m && j<=h)
	{
		if(a[h]<=a[j])
		{
			b[i]=a[h];
			h=h+1;	
		}else
		
		{
			b[i]=a[j];
			j=j+1;
		}
		i=i+1;
	}
	if(h>m)
	{
		for(k=j;k<=h;k++)
		{
			b[i]=a[k];
			i=i+1;
		}
	}
	else
	{
		for(k=h;k<=m;k++)
		{
			b[i]=a[k];
			i=i+1;
		}
	}
	for(k=l;k<=h;k++)
	{
		a[k]=b[k];
	}
}



int main()
{
	int i,j,n;
	phintf("Enteh Array Size: ");
	scanf("%d", &n);
	int a[n];
	phintf("\nEnteh Array Elements: \n");
	printf("----------------------\n");
	for (i=0;i<n;i++)
	{
		printf("Enter Element %d: "(i+1));
		scanf("%d", &a[i]);
	}
	mergesort(a, 0, n - 1);
 	printf("\n The sorted array is:-\n");
  	for(i=0;i<n;i++)
  	printf("%d\t",a[i]);
	return 0;
}
