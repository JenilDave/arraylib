# arraylib
Finding difficult/ bored to make algorithms for arrays? Use this source code it will help you find smallest, largest and sort array.

Example usage:

#include<stdio.h>
#include "arraylib.c"

int main(){
	int ar[4] = {1,34,452,13};
	int large = largest(ar,4);
	printf("%d",ar[large]); //returns index of largest number
	return 0;
}

here, largest will give you index of largest number.
Description for largest :
int largest(int *dest,int size)
	/*@params: array, array size
	  @brief: finds largest number in the array defined size
	  @return: index of largest number */

Similarly for smallest and sort. Descriptions are available in "arraylib.c"
Other fuctionalities will be added soon. Feel free to contribute.
