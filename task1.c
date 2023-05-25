#include<stdio.h>
int main()
{
	int i,n,a[100];
	printf("Enter the value of Array:-");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\nNegative elements in array:-");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d\t",a[i]);
		}
	}
	printf("\n");
}
