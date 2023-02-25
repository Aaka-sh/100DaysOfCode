#include<stdio.h>

int reverse(int x){
    int digit; 
    long int rev=0;
    while(x!=0){
        digit = x % 10;
        rev = rev * 10 + digit;
        x = x /10;
    }
    if(rev > 2147483647 || rev<-2147483647)
        return 0;
    else
        return rev;
}

void main(){
	int number;
	printf("Enter the number:\n");
	scanf("%d",&number);
	printf("\n%d",reverse(number));
}