#include "arrays.h"
#include<cstdio>
#include<cstdlib>
#include<cstring>
/**
*@help:a random arr generator.And if --first-num is specified,this first element
will be what is given
*@how:program length low-bound up-bound [--first-num value]
*@demo:$program 100 0 10000 --first-num 20.This will produce a program that has 100 elements,with first value 20,and other range form 0 to 1000.
*
*/

int main(int argc,char *argv[])
{
	int init=-65535;
	int len,low,up;
	if(argc<4)
	{
		fprintf(stderr,"3 argments needed at least\n");
		return 1;
	}
	len=atoi(argv[1]);low=atoi(argv[2]);up=atoi(argv[3]);

	if(argc>=5&&strcmp(argv[4],"--first-num")==0)
	{
		if(argc>=6)init=atoi(argv[5]);
		else 
		{
			fprintf(stderr,"no init value given\n");
			return 1;
		}
	}
	if(len<=0)
	{
		fprintf(stderr,"array size error:please speciefy a size > 0");
		return 1;
	}
	if(init!=-65535)
	{

		printf("%d ",init);
		--len;
	}
	out_random_arr(len,low,up);

	return 0;
}
