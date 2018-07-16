#include <stdio.h>
#include "insertion.h"

int main(int argc, char *argv[]){
	
	int numbers[] = {3,7,1,2,5,4,6,9,0,8,14,11,35,22,45,12,15,27,38,44,41,10};
	size_t size = sizeof(numbers) / sizeof(int);
	
	insertion_sort(numbers, size);
// printing after sorting	
	for(int i = 0; i < size; i++){
		printf(" -> %i \n", numbers[i]);
	}	

}
