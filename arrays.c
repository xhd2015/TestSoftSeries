#include<arrays.h>

void swap(int *a,int *b)
{
	if(*a==*b)return;
	int temp=*a;*a=*b;*b=temp;
}

void printArr(int arr[],int n)
{
for(int i=0;i<n;++i)
{
	printf("%d ",arr[i]);

}
printf("\n");
}
