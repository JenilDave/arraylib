#include<stdlib.h>
#include "arraylib.h"

int smallest(int* dest, int size){
	
	/*@params: array, array size
	  @brief: finds smallest number in the array defined size
	  @return: index of smallest number*/
	  
	int ref = dest[0];
	int i = 1;
	int cmp;
	for(i;i<size;i++){
		if(dest[i]<ref){
			ref = dest[i];
			cmp = i;
		}
	}
	return cmp;
}

int largest(int *dest,int size){
	
	/*@params: array, array size
	  @brief: finds largest number in the array defined size
	  @return: index of largest number */
	  
	int ref = dest[0];
	int i = 1;
	int cmp;
	for(i;i<size;i++){
		if(ref<dest[i]){
			ref = dest[i];
			cmp = i;
		}
	}
	return cmp;
}

void sort(int *dest,int size,int type){
	
	/*@params: array, array size, type of sorting(ascending/descinding)
	  @brief: sorting operation is done on the pointed array
	  @return: void
	  @usage: sort(array,arr_size,ASCENDING) this will sort the array in ascending order*/
	
	int i,j;
	if(type == DESCENDING){
		for(i = 0;i<size;i++){
				for(j=0;j<size;j++){
					if(dest[i]>dest[j]){
						dest[i] = dest[j]+dest[i];
						dest[j] = dest[i]-dest[j];
						dest[i] = dest[i]-dest[j];
					}
				}
			}
		}
		
	else{
		for(i = 0;i<size;i++){
			for(j=0;j<size;j++){
				if(dest[i]<dest[j]){
					dest[i] = dest[j]+dest[i];
					dest[j] = dest[i]-dest[j];
					dest[i] = dest[i]-dest[j];
				}
			}
		}
	}
	
}
/*
//int main(){
//	#ifndef _ARRAYLIB_H
//	#ERROR
//	#endif
//}

	

//int main(){
//	int i;
//	int arr[6] = {0,68792,2454,9079794,7000,67};
//	sort(arr,sizeof arr/sizeof arr[0],DESCENDING);
//	for(i;i<6;i++){
//		printf("%d,",arr[i]);
//	}
//}
*/
