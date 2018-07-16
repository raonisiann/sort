#include <stdio.h>

#ifndef INCLUDE_INSERTION_H 
#include "insertion.h"
#endif

void insertion_sort(int arr[], size_t size){
	int tmp, save;
	
	for(int i = 0; i < size; i++){
		tmp = arr[i];
		save = i;
		for(int j = i - 1; tmp < arr[j] && j >= 0; j--){
			save = j;
			arr[j+1] = arr[j];
		}
		arr[save] = tmp;
	}
}
