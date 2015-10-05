#include "arrays.h"
#include<ctime>
#include<cstdlib>
#include<cstdio>
void swap(int *a,int *b)
{
	if(*a==*b)return;
	int temp=*a;*a=*b;*b=temp;
	make_random_arr(0,0,0);
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

void out_random_arr(size_t len,int low,int up)
{
	srand(time(NULL));
	for(int i=0;i<len;++i)
	{

		int num=rand()%(up-low)+low;
		printf("%d ",num);
	}


}
