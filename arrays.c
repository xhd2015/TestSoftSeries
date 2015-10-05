#include<arrays.h>
#include<ctime>
#include<cstdlib>

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

int *make_random_arr(size_t len,int low,int up)
{
	int *arr=(int *)malloc(len*sizeof(int));
	if(!arr)return NULL;
	srand(time(NULL));
	for(int i=0;i<len;++i)
	{
		arr[i]=rand()%(up-low)+low;
	}
	return arr;
}
