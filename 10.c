#include <stdio.h>
#include <stdlib.h>
void swap(int *x,int*y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int num, *arr, i, j;
	scanf("%d", &num);
	arr = (int*) malloc(num * sizeof(int));
	for(i = 0; i < num; i++) {
		scanf("%d", arr + i);
	}
	
	
	/* Write the logic to reverse the array. */
	
	for(i=0,j=num-1;i<j;i++,j--){
		swap(arr+i,arr+j);
	}
	
	for(i = 0; i < num; i++)
		printf("%d ", *(arr + i));
	return 0;
}
