
#ifdef INCLUDE_TEST_SOFT_SERIES
#ifndef ARRAYS_H
#define ARRAYS_H



#ifndef GET_ARR_SIZE
#define GET_ARR_SIZE
#define getArrSize(arr) (arr)==NULL?0:sizeof(arr)/sizeof((arr)[0])
#endif

/**
*@function: print an array
*/
void printArr(int arr[],int n);

/**
*@function: swap two elements
*@precondition:a and b are neither NULL	
*@poscondition:a and b value exchanged
*/
void swap(int *a,int *b);

/**
*@function: make an random in given len and range
*@precondition:len is no less than 0,range should be expressed properly
*@poscondition:return an array in the malloced heap,you must free it by yourself
*/
int *make_random_arr(size_t len,int low,int up);

#endif	//ARRAYS_H
#endif	//INCLUDE_TEST_SOFT_SERIES
