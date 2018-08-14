#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int datos, i, sum=0;
	scanf("%d", &datos);
	int *array = (int*)malloc(datos* sizeof(int));
	for (i=0; i<datos; i++){
		scanf("%d", &array[i]);
	}
	for (i=0; i<datos; i++){
		sum+=*(array + i);
	}
	printf("%d", sum);
	return 0;
}
