/*
Write a program in C to multiply two numbers without actually using the * operator, by using do-while loop
*/


#include <stdio.h>

void main(){

	int x, y; 					//declaring two integer variable
	int product = 0; 				//initializing product to zero

	printf("Enter two integers:\n");
	scanf("%d%d", &x, &y);

	//loop to calculate product
	do{
		product += x;
		y--;
	}while(y != 0);

	printf("\nProduct = %d\n", product);

}

