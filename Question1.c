//Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers.  
//Author: Akash Goyal
//Date: 1 February

#include<stdio.h>

void main(){
	int i,j,array[5],temp;
	printf("Enter five elements:\n");
	for(i=0;i<5;i++){
		scanf("%d",&array[i]);
	}
	
	//sorting the array
	for(i=0;i<4;i++){
		for(j=0;j<5-i-1;j++){
			if(array[j]>array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	//finding the minimum value by summing four out of five numbers
	int min_sum = 0;
	for(i=0;i<4;i++){
		min_sum = min_sum + array[i];
	}
	
	//finding the maximum value by summing four out of five numbers
	int max_sum = 0;
	for(i=1;i<5;i++){
		max_sum = max_sum + array[i];
	}
	
	printf("\n%d %d ",min_sum,max_sum);
}