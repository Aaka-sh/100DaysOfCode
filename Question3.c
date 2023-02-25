//Program: Accept an integer array from the user. Return true if the any value appears atleast twice in the array and return false if every element is distinct
//Author: Akash Goyal
//Registration Number: 2247206
//Date: February 2, 2023

#include<stdio.h>
#define N 5
void main(){
	int array[N];
	int i, j, flag=0;
	printf("Enter elements in the array:\n");
	for(i=0;i<N;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<N;i++){
		for(j= i+1;j<N;j++){
			if(array[i] == array[j]){
				flag = 1;
				break;
			}
		}
	}
	if(flag == 1)
		printf("True");
	else
		printf("False");
	
}