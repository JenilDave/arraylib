#define _ARRAYLIB_H
#define ERROR -1
#define	ASCENDING 0
#define	DESCENDING 1
 	
extern int smallest(int* dest, int size);
extern int largest(int *dest,int size);
extern void sort(int *dest,int size,int type);

