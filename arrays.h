
#ifdef INCLUDE_TEST_SOFT_SERIES
#ifndef ARRAYS_H
#define ARRAYS_H

#ifndef GET_ARR_SIZE
#define GET_ARR_SIZE
#define getArrSize(arr) (arr)==NULL?0:sizeof(arr)/sizeof((arr)[0])
#endif


void printArr(int arr[],int n);
void swap(int *a,int *b);


}


#endif	//ARRAYS_H
#endif	//INCLUDE_TEST_SOFT_SERIES
