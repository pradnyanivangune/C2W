/*
Q9. Write a program to print following pattern.  Take no of rows from user

				a
			a	b 
		a	b	c
	a	b	c	d
a	b	c	d	e

*/

#include<stdio.h>
void main(){
	
	int n ;
	printf("Enter no. of rows:\n");
	scanf("%d",&n);


	for(int i = 1 ; i <= n ; i++){

		for(int k = n-1 ; k >= i  ; k--){

			printf("\t ");
			

		}

		char ch = 'a' ;
		for(int j = 1 ; j <= i ; j++){

			printf("%c\t ",ch);
			ch++;
		}
		printf("\n");
	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ gedit Prog9.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ cc Prog9.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ ./a.out
Enter no. of rows:
5
	 	 	 	 a	 
	 	 	 a	 b	 
	 	 a	 b	 c	 
	 a	 b	 c	 d	 
a	 b	 c	 d	 e	

*/

